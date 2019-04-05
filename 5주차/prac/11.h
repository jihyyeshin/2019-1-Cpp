#pragma once
#include <iostream>
using namespace std;

class Container { // �� �ϳ��� ��Ÿ���� Ŭ����
	int size; // ���� ���� ��, �ִ� ���� ���ɷ��� 10
public:
	Container() { size = 10; }
	void fill(int n) { size += n; } // n ��ŭ ä���
	bool consume(int n); // n ��ŭ �Ҹ��ϱ�
	int getSize() { return size; } // ���� ũ�� ����
};

class CoffeeVendingMachine {// Ŀ�� ���Ǳ⸦ ǥ���ϴ� Ŭ����
	Container tong[3]; // tong[0]�� Ŀ��, tong[1]�� ��, tong[2]�� �������� ��Ÿ��
	void fill(); // 3���� ���� ��� 10���� ä��
	void selectEspresso(); // ���������Ҹ� ������ ���, Ŀ�� 1, �� 1 �Ҹ�
	void selectAmericano(); // �Ƹ޸�ī�븦 ������ ���, Ŀ�� 1, �� 2 �Ҹ�
	void selectSugarCoffee(); // ����Ŀ�Ǹ� ������ ���, Ŀ�� 1, �� 2 �Ҹ�, ���� 1 �Ҹ�
	void show(); // ���� Ŀ��, ��, ������ �ܷ� ���
	bool checkInputError(int num); // ���� ó���� ���� �߰��� ��� �Լ�
public:
	CoffeeVendingMachine();
	void run(int n);//Ŀ�� ���Ǳ� ����
};

void CoffeeVendingMachine::fill() {
	int buf;
	for (int i = 0; i < 3; i++) {
		buf = 10 - tong[i].getSize();
		tong[i].fill(buf);
	}
	show();
}

void CoffeeVendingMachine::show() {
	cout << "Ŀ��, " << tong[0].getSize();
	cout << " ��, " << tong[1].getSize();
	cout << " ���� " << tong[2].getSize() << endl;
}

bool CoffeeVendingMachine::checkInputError(int num) {
	if (num > 5 || num < 1) return false;
	else return true;
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].consume(1)) {
		if (tong[1].consume(1))
			cout << "���������� �弼��" << endl;
	}
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].consume(1)) {
		if (tong[1].consume(2))
			cout << "�Ƹ޸�ī�� �弼��" << endl;
	}
}

void CoffeeVendingMachine::selectSugarCoffee() {
	cout << "����Ŀ�� �弼��" << endl;
	if (tong[0].consume(1)) {
		if (tong[1].consume(2))
			if (tong[2].consume(1))
				cout << "����Ŀ�� �弼��" << endl;
	}
}

CoffeeVendingMachine::CoffeeVendingMachine() {
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
}

void CoffeeVendingMachine::run(int n) {
	if (checkInputError(n)) {
		switch (n) {
		case 1://����������
			selectEspresso();
			show();
			break;
		case 2://�Ƹ޸�ī��
			selectAmericano();
			show();
			break;
		case 3://����Ŀ��
			selectSugarCoffee();
			show();
			break;
		case 4://�ܷ�����
			show();
			break;
		case 5://ä���
			fill();
			break;
		}
	}
}

bool Container::consume(int n) {
	if (size - n < 0) {
		cout << "���ᰡ �����մϴ�.\n";
		return false;
	}
	else {
		size -= n;
		return true;
	}
}
