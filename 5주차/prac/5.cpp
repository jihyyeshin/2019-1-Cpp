#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
	string str;
	srand((unsigned int)time(0));//랜덤
	int buf;//string의 변경될 위치
	char alpha;//변경할 알파벳
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)\n";
	while (true) {
		cout << ">>";
		getline(cin, str);
		if (str.compare("exit") == 0)//종료 메시지
			return 0;
		buf = rand() % str.length();
		alpha = rand() % 26 + 97;
		str[buf] = alpha;//알파벳 변경
		cout << str << endl;//변경된 값을 출력
	}
}