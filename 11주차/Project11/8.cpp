#include<iostream>
#include"8.h"
using namespace std;

int main() {
	InkJet *Ink = new InkJet("Officejet V40", "HP", 5, 10);
	Laser *laser = new Laser("SCX-6x45", "�Ｚ����", 3, 20);
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����." << endl;
	cout << "��ũ�� : "; Ink->show();
	cout << "������ : "; laser->show();

	int choice, num; char answer;
	while (1) {
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> choice >> num;
		switch (choice) {
		case 1:
			Ink->printInkJet(num);
			Ink->show();
			laser->show();
			break;
		case 2:
			laser->printLaser(num);
			Ink->show();
			laser->show();
			break;
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			break;
		}
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> answer;
		if (answer == 'n')break;
	}
}