/*
�ǽ�����15

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
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
			cout << "�����ڸ� �ٽ� �Է����ּ���." << endl;
		}
	}

}