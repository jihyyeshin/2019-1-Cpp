/*
실습문제06

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string passW1, passW2;
	
	cout << "새 암호를 입력하세요 >>";
	cin >>passW1;
	cout << "새 암호를 다시 한 번입력하세요 >>";
	cin >> passW2;
	if (passW1.compare(passW2) == 0)
		cout << "같습니다\n";
	else
		cout << "같지 않습니다\n";

	return 0;
}