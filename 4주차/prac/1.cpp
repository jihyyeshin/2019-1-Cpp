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
	cout << "숫자 두 개를 입력하세요." << endl;
	cin >> num1 >> num2;
	cout << fixed;//소수점 이하 첫째자리
	cout.precision(1);
	cout << m.mul(num1, num2);
}