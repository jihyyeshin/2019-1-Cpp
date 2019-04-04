#pragma once
#include <iostream>
using namespace std;

class Circle {
	int radius;//원의 반지름 값
public:
	void setRadius(int radius);//반지름을 설정한다.
	double getArea();//면적을 리턴한다.
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return radius * radius*3.14;
}