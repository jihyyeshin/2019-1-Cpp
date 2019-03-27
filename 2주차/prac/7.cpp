/*
실습문제07

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	while (true) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		getline(cin, str);
		if (str.compare("yes") == 0) {
			cout << "종료합니다..." << endl;
			return 0;
		}
	}
}