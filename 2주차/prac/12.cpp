/*
실습문제12

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
using namespace std;

int sum(int, int);

int main() {
	
	int n = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << " 입니다.\n";
	return 0;
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = 0; k <= b; k++) {
		res += k;
	}
	return res;
}