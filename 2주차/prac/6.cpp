/*
�ǽ�����06

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string passW1, passW2;
	
	cout << "�� ��ȣ�� �Է��ϼ��� >>";
	cin >>passW1;
	cout << "�� ��ȣ�� �ٽ� �� ���Է��ϼ��� >>";
	cin >> passW2;
	if (passW1.compare(passW2) == 0)
		cout << "�����ϴ�\n";
	else
		cout << "���� �ʽ��ϴ�\n";

	return 0;
}