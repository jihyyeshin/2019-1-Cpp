#pragma once
#include <iostream>
using namespace std;
class Matrix {
	int a, b, c, d;
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		this->a = a; this->b = b; this->c = c; this->d = d;
	}
	void show() {
		cout << "Matrix = { " << a << " " << b << " "
			<< c << " " << d << " }" << endl;
	}
	void operator>>(int *op2);
	void operator<<(int *op2);
};

void Matrix::operator>>(int *op2) {
	op2[0] = a;
	op2[1] = b;
	op2[2] = c;
	op2[3] = d;
}
void Matrix::operator<<(int *op2) {
	a = op2[0];
	b = op2[1];
	c = op2[2];
	d = op2[3];
}