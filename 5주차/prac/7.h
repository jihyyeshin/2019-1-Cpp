#pragma once
#include <iostream>
using namespace std;

class Circle {
	int radius;//���� ������ ��
public:
	void setRadius(int radius);//�������� �����Ѵ�.
	double getArea();//������ �����Ѵ�.
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return radius * radius*3.14;
}