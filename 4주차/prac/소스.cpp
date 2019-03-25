#include <iostream>
using namespace std;

int main() {
	int num = 5;

	int *x=&num;//num狼 林家
	cout << x <<endl;//num狼 林家
	cout << *x << endl;//num狼 value
	cout << &x << endl;//x狼 林家
	cout << &num << endl;//num狼 林家
}