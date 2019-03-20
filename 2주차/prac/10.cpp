/*
실습문제10

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "문자열 입력>>";
	getline(cin, str);
	for (int i = 1; i <= str.length(); i++) {
		cout << str.substr(0, i) << endl;
	}
	return 0;
}