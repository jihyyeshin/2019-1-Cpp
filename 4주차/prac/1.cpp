#include <iostream>
using namespace std;


class Mul {
public:
	double mul(double num1, double num2) {
		return num1 * num2;
	}
};
int main() {
	double num1, num2;
	Mul m;
	cout << "���� �� ���� �Է��ϼ���." << endl;
	cin >> num1 >> num2;
	cout << fixed;//�Ҽ��� ���� ù°�ڸ�
	cout.precision(1);
	cout << m.mul(num1, num2);
}