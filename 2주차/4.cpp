/*
실습문제04

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
using namespace std;

int main(void) {
	double num[5];
	double max = 0;
	cout << "두 개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		if (num[i] > max)
			max = num[i];
	}
	cout << "제일 큰 수 = " << max << endl;

	return 0;
}