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
	cout << "두개의 정수를 입력하세요>> ";
	cin >> n1 >> n2;
	if (bigger(n1, n2, b1))
		cout << "두 개의 정수는 같습니다." << endl;
	else
		cout << b1 << " 이 더 큰 정수입니다." << endl;
	return 0;
}