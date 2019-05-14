#pragma once
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) {
		this->radius = radius;
	}
	void show() {
		cout << "radius = " << radius << " �� ��" << endl;
	}
	friend Circle& operator++(Circle& op1);
	friend Circle operator++(Circle& op1, int x);
};

Circle& operator++(Circle& op1) {
	op1.radius++;
	return op1;
}

Circle operator++(Circle& op1, int x) {
	Circle tmp;
	tmp = op1;
	op1.radius++;
	return tmp;
}