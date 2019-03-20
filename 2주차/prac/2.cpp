/*
실습문제02

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
using namespace std;

int main(void) {

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) 
			cout << i <<'*' << j << '=' << i*j << '\t';
		cout << "\n";
	}
	return 0;

}