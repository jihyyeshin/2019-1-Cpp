/*
�ǽ�����10-2

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/

#include <iostream>
#include "10.h"
using namespace std;

void Cal::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}

int Add::calculate() {
	return a + b;
}
int Sub::calculate() {
	return a - b;
}
int Mal::calculate() {
	return a * b;
}
int Div::calculate() {
	return a / b;
}

int main() {
	int x, y;
	char oper;
	Add a;
	Sub s;
	Mal m;
	Div d;
	while (true) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> x >> y >> oper;
		switch (oper) {
		case('+'):
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case('-'):
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case('*'):
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case('/'):
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		}
	}
}
