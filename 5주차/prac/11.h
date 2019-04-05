#pragma once
#include <iostream>
using namespace std;

class Container { // 통 하나를 나타내는 클래스
	int size; // 현재 저장 량, 최대 저장 가능량은 10
public:
	Container() { size = 10; }
	void fill(int n) { size += n; } // n 만큼 채우기
	bool consume(int n); // n 만큼 소모하기
	int getSize() { return size; } // 현재 크기 리턴
};

class CoffeeVendingMachine {// 커피 자판기를 표현하는 클래스
	Container tong[3]; // tong[0]는 커피, tong[1]은 물, tong[2]는 설탕통을 나타냄
	void fill(); // 3개의 통을 모두 10으로 채움
	void selectEspresso(); // 에스프레소를 선택한 경우, 커피 1, 물 1 소모
	void selectAmericano(); // 아메리카노를 선택한 경우, 커피 1, 물 2 소모
	void selectSugarCoffee(); // 설탕커피를 선택한 경우, 커피 1, 물 2 소모, 설탕 1 소모
	void show(); // 현재 커피, 물, 설탕의 잔량 출력
	bool checkInputError(int num); // 오류 처리를 위해 추가한 멤버 함수
public:
	CoffeeVendingMachine();
	void run(int n);//커피 자판기 가동
};

void CoffeeVendingMachine::fill() {
	int buf;
	for (int i = 0; i < 3; i++) {
		buf = 10 - tong[i].getSize();
		tong[i].fill(buf);
	}
	show();
}

void CoffeeVendingMachine::show() {
	cout << "커피, " << tong[0].getSize();
	cout << " 물, " << tong[1].getSize();
	cout << " 설탕 " << tong[2].getSize() << endl;
}

bool CoffeeVendingMachine::checkInputError(int num) {
	if (num > 5 || num < 1) return false;
	else return true;
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].consume(1)) {
		if (tong[1].consume(1))
			cout << "에스프레소 드세요" << endl;
	}
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].consume(1)) {
		if (tong[1].consume(2))
			cout << "아메리카노 드세요" << endl;
	}
}

void CoffeeVendingMachine::selectSugarCoffee() {
	cout << "설탕커피 드세요" << endl;
	if (tong[0].consume(1)) {
		if (tong[1].consume(2))
			if (tong[2].consume(1))
				cout << "설탕커피 드세요" << endl;
	}
}

CoffeeVendingMachine::CoffeeVendingMachine() {
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
}

void CoffeeVendingMachine::run(int n) {
	if (checkInputError(n)) {
		switch (n) {
		case 1://에스프레소
			selectEspresso();
			show();
			break;
		case 2://아메리카노
			selectAmericano();
			show();
			break;
		case 3://설탕커피
			selectSugarCoffee();
			show();
			break;
		case 4://잔량보기
			show();
			break;
		case 5://채우기
			fill();
			break;
		}
	}
}

bool Container::consume(int n) {
	if (size - n < 0) {
		cout << "원료가 부족합니다.\n";
		return false;
	}
	else {
		size -= n;
		return true;
	}
}
