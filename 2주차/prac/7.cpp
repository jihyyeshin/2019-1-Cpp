/*
�ǽ�����07

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		getline(cin, str);
		if (str.compare("yes") == 0) {
			cout << "�����մϴ�..." << endl;
			return 0;
		}
	}
}