#pragma once
#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int c, int w, int s) {//생성자
		this->coffee = c;
		this->water = w;
		this->sugar = s;
	}
	void drinkEspresso() {//커피 1, 물 1 소비
		this->coffee -= 1;
		this->water -= 1;
	}
	void drinkAmericano() {//커피 1, 물 2 소비
		this->coffee -= 1;
		this->water -= 2;
	}
	void drinkSugarCoffee() {//커피1, 물2, 설탕 1 소비
		this->coffee -= 1;
		this->water -= 2;
		this->sugar -= 1;
	}
	void fill() {//커피 10, 물 10, 설탕 10으로 채우기
		this->coffee = 10;
		this->water = 10;
		this->sugar = 10;
	}
	void show() {//현재 커피 머신의 상태 출력
		cout << "커피 머신 상태, 커피: " << this->coffee << "  물: " << this->water << "  설탕: " << this->sugar << endl;
	}

};