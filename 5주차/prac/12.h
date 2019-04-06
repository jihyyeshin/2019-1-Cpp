#pragma once
#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;//원의 반지름 값
	string name;//원의 이름
public:
	void setCircle(string name, int radius);//이름과 반지름 설정
	double getArea();
	string getName();
};

class CircleManager {
	Circle *p;//Circle배열에 대한 포인터
	int size;//배열의 크기
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();//사용자로부터 원의 이름을 입력받아 면적 출력
	void searchByArea();//사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
};

void Circle::setCircle(string name, int radius) {//이름과 반지름 설정
	this->name = name;
	this->radius = radius;
}
double Circle::getArea() {
	return radius * radius*3.14;
}
string Circle::getName() {
	return name;
}
CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];

	string name;
	int radius;

	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}
CircleManager::~CircleManager() {
	delete[] p;
}
void CircleManager::searchByName() {//사용자로부터 원의 이름을 입력받아 면적 출력
	string name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (name.compare(p[i].getName()) == 0)//동일한 이름이 있으면
			cout << name << "의 면적은 " << p[i].getArea() << endl;
	}
}
void CircleManager::searchByArea() {//사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
	double area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다. " << endl;
	for (int i = 0; i < size; i++) {
		if (area < p[i].getArea())//동일한 이름이 있으면
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
	}
	cout << endl;
}