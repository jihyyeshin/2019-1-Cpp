/*
�ǽ�����08

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	char name[100] = {};
	char maxName[100] = {};
	
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���.\n>>";
	
	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;
		if (strlen(name) > strlen(maxName)) {//���̸� ��, �ִ� ���� ���� ����
			strcpy_s(maxName, name);
		}
	}
	cout << "���� �� �̸��� " << maxName << endl;
}