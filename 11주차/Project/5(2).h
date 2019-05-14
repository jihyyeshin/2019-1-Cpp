#pragma once
#include <iostream>
using namespace std;
class Color {
	int a, b, c;
public:
	Color(int a = 0, int b = 0, int c = 0) {
		this->a = a; this->b = b; this->c = c;
	}
	void show() {
		cout << a << " " << b << " " << c << endl;
	}
	friend Color operator+(Color op1, Color op2);
	friend bool operator==(Color op1, Color op2);
};

Color operator+(Color op1, Color op2) {
	Color tmp;
	tmp.a = op1.a + op2.a;
	tmp.b = op1.b + op2.b;
	tmp.c = op1.c + op2.c;
	return tmp;
}

bool operator==(Color op1, Color op2) {
	if (op2.a == op1.a&&op2.b == op1.b&&op2.c == op1.c)return true;
	else return false;
}