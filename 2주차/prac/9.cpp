/*
�ǽ�����09

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name,adr;
	int age;
	cout << "�̸���?";
	getline(cin, name);
	cout << "�ּҴ�?";
	getline(cin, adr);
	cout << "���̴�?";
	cin >> age;
	cout << name << ", " << adr << ", " << age << endl;
}