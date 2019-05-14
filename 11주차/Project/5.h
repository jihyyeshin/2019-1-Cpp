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
	Color operator+(Color op1);
	bool operator==(Color op1);
};

Color Color::operator+(Color op1) {
	Color tmp;
	tmp.a = this->a + op1.a;
	tmp.b = this->b + op1.b;
	tmp.c = this->c + op1.c;
	return tmp;
}

bool Color::operator==(Color op1) {
	if (a == op1.a&&b == op1.b&&c == op1.c)return true;
	else return false;
}
