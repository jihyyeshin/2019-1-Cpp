#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)\n";
	while (true) {
		cout << ">>";
		getline(cin, str);
		if (str.compare("exit") == 0)//종료 메시지
			return 0;
		for (int i = str.length() - 1; i >= 0; i--)
			cout << str[i];
		cout << endl;
		//cout << str << endl;//변경된 값을 출력
	}
}