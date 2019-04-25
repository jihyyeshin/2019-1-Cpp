#include <iostream>
#include <string>
using namespace std;

class DebugInfo {
public:
	string tag;
	string comment;
};
class Trace {
	Trace() {}
	static int index;
	static DebugInfo info[1000];
public:
	static void put(string tag, string comment);
	static void print(string tag = "");
};

void Trace::put(string tag, string comment) {
	if (index == 1000) {
		cout << "Trace �޸� full" << endl;
		return;
	}
	DebugInfo a;
	a.tag = tag;
	a.comment = comment;
	info[index] = a;
	index++;
}

void Trace::print(string tag) {
	if (tag.length() == 0) {
		cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i<index; i++) {
			DebugInfo a = info[i];
			cout << a.tag << ":" << a.comment << endl;
		}
	}
	else {
		cout << "----- " << tag << "�±��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i<index; i++) {
			DebugInfo a = info[i];
			if (a.tag == tag)
				cout << a.tag << ":" << a.comment << endl;
		}
	}
}
//�ʱ�ȭ
int Trace::index = 0;
DebugInfo Trace::info[1000];

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}
int main() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");
	Trace::print("f()");
	Trace::print();
}