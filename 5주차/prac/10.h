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
	Person *p;//Person �迭 ������
	string name;
	int size;//Person �迭�� ũ��, ���� ������ ��
public:
	Family(string name, int size);// size������ŭ Person�迭 ���� ����
	void show();//��� ���� ������ ���
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
	cout << this->name << " ������ ������ ���� " << size << "�� �Դϴ�.";
	cout << endl;
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << "\t";
	cout << endl;
}

Family::~Family() {
	delete[] p;//�Ҹ�
}
