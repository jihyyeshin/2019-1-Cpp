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
	friend void operator>>(Matrix op1, int *op2);
	friend void operator<<(Matrix &op1, int *op2);
};

void operator>>(Matrix op1, int *op2) {
	op2[0] = op1.a;
	op2[1] = op1.b;
	op2[2] = op1.c;
	op2[3] = op1.d;
}
void operator<<(Matrix &op1, int *op2) {
	op1.a = op2[0];
	op1.b = op2[1];
	op1.c = op2[2];
	op1.d = op2[3];
}
