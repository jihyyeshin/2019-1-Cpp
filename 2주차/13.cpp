/*
실습문제13

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/

#include <iostream>
using namespace std;

int main() {
	int num;
	int howMuch;

	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> num;
		switch (num) {
		case(1):
			cout << "몇인분?";
			cin >> howMuch;
			cout << "짬뽕 " << howMuch << "인분 나왔습니다" << endl;
			break;
		case(2):
			cout << "몇인분?";
			cin >> howMuch;
			cout << "짜장 " << howMuch << "인분 나왔습니다" << endl;
			break;
		case(3):
			cout << "몇인분?";
			cin >> howMuch;
			cout << "군만두 " << howMuch << "인분 나왔습니다" << endl;
			break;
		case(4):
			cout << "오늘 영업은 끝났습니다." << endl;
			return 0;
		default:
			cout << "다시 주문하세요!!" << endl;
		}
	}
	return 0;
}