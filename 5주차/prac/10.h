#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() {}
	Person(string name) { this->name = name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person *p;//Person 배열 포인터
	string name;
	int size;//Person 배열의 크기, 가족 구성원 수
public:
	Family(string name, int size);// size개수만큼 Person배열 동적 생성
	void show();//모든 가족 구성원 출력
	void setName(int index, string name);
	~Family();
};

Family::Family(string name, int size) {
	this->size = size;
	this->name = name;
	p = new Person[size];
}

void Family::setName(int index, string name) {
	p[index].setName(name);
}

void Family::show() {
	cout << this->name << " 가족은 다음과 같이 " << size << "명 입니다.";
	cout << endl;
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << "\t";
	cout << endl;
}

Family::~Family() {
	delete[] p;//소멸
}
