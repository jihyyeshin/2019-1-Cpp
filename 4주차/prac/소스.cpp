#include <iostream>
using namespace std;

int main() {
	int num = 5;

	int *x=&num;//num�� �ּ�
	cout << x <<endl;//num�� �ּ�
	cout << *x << endl;//num�� value
	cout << &x << endl;//x�� �ּ�
	cout << &num << endl;//num�� �ּ�
}