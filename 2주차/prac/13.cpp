/*
�ǽ�����13

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/

#include <iostream>
using namespace std;

int main() {
	int num;
	int howMuch;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> num;
		switch (num) {
		case(1):
			cout << "���κ�?";
			cin >> howMuch;
			cout << "«�� " << howMuch << "�κ� ���Խ��ϴ�" << endl;
			break;
		case(2):
			cout << "���κ�?";
			cin >> howMuch;
			cout << "¥�� " << howMuch << "�κ� ���Խ��ϴ�" << endl;
			break;
		case(3):
			cout << "���κ�?";
			cin >> howMuch;
			cout << "������ " << howMuch << "�κ� ���Խ��ϴ�" << endl;
			break;
		case(4):
			cout << "���� ������ �������ϴ�." << endl;
			return 0;
		default:
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
		}
	}
	return 0;
}