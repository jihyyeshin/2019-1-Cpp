#pragma once
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
	friend Matrix operator+(Matrix op1, Matrix op2);
	friend Matrix& operator+=(Matrix &op1, Matrix op2);
	friend bool operator==(Matrix op1, Matrix op2);
};

Matrix operator+(Matrix op1, Matrix op2) {
	Matrix tmp;
	tmp.a = op2.a + op1.a;
	tmp.b = op2.b + op1.b;
	tmp.c = op2.c + op1.c;
	tmp.d = op2.d + op1.d;
	return tmp;
}
Matrix& operator+=(Matrix &op1, Matrix op2) {
	op1.a += op2.a;
	op1.b += op2.b;
	op1.c += op2.c;
	op1.d += op2.d;
	return op1;
}
bool operator==(Matrix op1, Matrix op2) {
	return (op2.a == op1.a&&op2.b == op1.b&&op2.c == op1.c&&op2.d == op1.d);
}