/*
실습문제08

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	char name[100] = {};
	char maxName[100] = {};
	
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요.\n>>";
	
	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;
		if (strlen(name) > strlen(maxName)) {//길이를 비교, 최대 길이 저장 과정
			strcpy_s(maxName, name);
		}
	}
	cout << "가장 긴 이름은 " << maxName << endl;
}