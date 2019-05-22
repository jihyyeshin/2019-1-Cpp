#include<iostream>
#include"8.h"
using namespace std;

int main() {
	InkJet *Ink = new InkJet("Officejet V40", "HP", 5, 10);
	Laser *laser = new Laser("SCX-6x45", "삼성전자", 3, 20);
	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
	cout << "잉크젯 : "; Ink->show();
	cout << "레이저 : "; laser->show();

	int choice, num; char answer;
	while (1) {
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
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
			cout << "잘못 입력하셨습니다." << endl;
			break;
		}
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> answer;
		if (answer == 'n')break;
	}
}