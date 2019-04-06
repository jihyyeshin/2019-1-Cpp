#pragma once
#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;//���� ������ ��
	string name;//���� �̸�
public:
	void setCircle(string name, int radius);//�̸��� ������ ����
	double getArea();
	string getName();
};

class CircleManager {
	Circle *p;//Circle�迭�� ���� ������
	int size;//�迭�� ũ��
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();//����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	void searchByArea();//����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ���
};

void Circle::setCircle(string name, int radius) {//�̸��� ������ ����
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
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}
CircleManager::~CircleManager() {
	delete[] p;
}
void CircleManager::searchByName() {//����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (name.compare(p[i].getName()) == 0)//������ �̸��� ������
			cout << name << "�� ������ " << p[i].getArea() << endl;
	}
}
void CircleManager::searchByArea() {//����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ���
	double area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�. " << endl;
	for (int i = 0; i < size; i++) {
		if (area < p[i].getArea())//������ �̸��� ������
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
	}
	cout << endl;
}