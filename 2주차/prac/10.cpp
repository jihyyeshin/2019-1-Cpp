/*
�ǽ�����10

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "���ڿ� �Է�>>";
	getline(cin, str);
	for (int i = 1; i <= str.length(); i++) {
		cout << str.substr(0, i) << endl;
	}
	return 0;
}