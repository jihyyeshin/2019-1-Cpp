#include <iostream>
#include <string>
#include "8.h"
using namespace std;

int Trace::index = 0;
Debug Trace::debug[101];

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main() {
	Trace::put("main()", "���α׷� �����մϴ�.");
	f();
	Trace::put("main()", "����");
	Trace::print("f()");
	Trace::print();
}