#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a > b)
		big = a;
	else if (a < b)
		big = b;
	else return true;
	return false;
}
int main() {
	int n1, n2, b1;
	cout << "�ΰ��� ������ �Է��ϼ���>> ";
	cin >> n1 >> n2;
	if (bigger(n1, n2, b1))
		cout << "�� ���� ������ �����ϴ�." << endl;
	else
		cout << b1 << " �� �� ū �����Դϴ�." << endl;
	return 0;
}