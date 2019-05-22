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
	Matrix operator+(Matrix op1);
	Matrix& operator+=(Matrix op1);
	bool operator==(Matrix op1);
};

Matrix Matrix::operator+(Matrix op1) {
	Matrix tmp;
	tmp.a = a + op1.a;
	tmp.b = b + op1.b;
	tmp.c = c + op1.c;
	tmp.d = d + op1.d;
	return tmp;
}
Matrix& Matrix::operator+=(Matrix op1) {
	a += op1.a;
	b += op1.b;
	c += op1.c;
	d += op1.d;
	return *this;
}
bool Matrix::operator==(Matrix op1) {
	return (a == op1.a&&b == op1.b&&c == op1.c&&d == op1.d);
}