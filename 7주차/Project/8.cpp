#include <iostream>
#include <string>
using namespace std;

class DebugInfo {
public:
	string str;
	string comment;
};
class Trace {
	Trace() {}
	static int index;
	static DebugInfo info[1000];
public:
	static void put(string str, string comment);
	static void print(string str = "");
};

void Trace::put(string str, string comment) {
	if (index == 1000) {
		cout << "Trace 메모리 full" << endl;
		return;
	}
	DebugInfo a;
	a.str = str;
	a.comment = comment;
	info[index] = a;
	index++;
}

void Trace::print(string str) {
	if (str.length() == 0) {
		cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i<index; i++) {
			DebugInfo a = info[i];
			cout << a.str << ":" << a.comment << endl;
		}
	}
	else {
		cout << "----- " << str << "태그의 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i<index; i++) {
			DebugInfo a = info[i];
			if (a.str == str)
				cout << a.str << ":" << a.comment << endl;
		}
	}
}

//초기화 무조건 해줘야 함
int Trace::index = 0;
DebugInfo Trace::info[1000];

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램 시작합니다.");
	f();
	Trace::put("main()", "종료");
	Trace::print("f()");
	Trace::print();
}