/*
실습문제16

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	char alphabet=0;
	int i = 0;
	int alphaTotal = 0;
	int alphaNum[26] = {0,};//알파벳 개수를 각각 넣어주는 배열

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	getline(cin, str, ';');//string 입력

	/*알파벳 찾기*/
	for (i = 0; i < str.length(); i++) {//string에서 알파벳을 찾아 저장
		if (isalpha(str.at(i))) {
			alphabet = tolower(str.at(i));
			alphaNum[alphabet - 'a']++;
			alphaTotal++;
		}
	}

	/*결과*/
	cout << "총 알파벳 수 " << alphaTotal << "\n\n";
	for (i = 0; i < 26 ; i++) {
		cout << char('a' + i) << " (" << alphaNum[i] << ")\t: ";
		for (int j = 0; j < alphaNum[i]; j++)
			cout << '*';
		cout << endl;
	}
	return 0;
}
