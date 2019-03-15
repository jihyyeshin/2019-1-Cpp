/*
실습문제04

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>

int main() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}


