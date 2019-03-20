/*
실습문제15

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
using namespace std;

int main() {
	int num1, num2, sum;
	char oper;
	while (true) {
		cout << "?";
		cin >> num1 >> oper >> num2;
		switch (oper) {
		case('+'):
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			break;
		case('-'):
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			break;
		case('*'):
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			break;
		case('/'):
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			break;
		case('%'):
			cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
			break;
		default:
			cout << "연산자를 다시 입력해주세요." << endl;
		}
	}

}