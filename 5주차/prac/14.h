#pragma once
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Player {
	string pName;
	int randNum[3];
public:
	void setName(string pName) {
		this->pName = pName;
	}
	string getName() {
		return pName;
	}
	bool makeRandNum() {
		for (int i = 0; i < 3; i++) {
			randNum[i] = rand() % 3;//0~2
			cout << randNum[i] << "\t";
		}
		if (randNum[0] == randNum[1] && randNum[0] == randNum[2])
			return true;
		else return false;
	}
};

class GamblingGame {
	Player *p;
public:
	GamblingGame() {
		cout << "***** �׺� ������ �����մϴ�. *****" << endl;
		p = new Player[2];
		string name;
		string buf[2] = { "ù", "��" };
		for (int i = 0; i < 2; i++) {
			cout << buf[i] << "��° ���� �̸�>>";
			cin >> name;
			p[i].setName(name);
		}
	}
	bool gameStart() {
		for (int i = 0; i < 2; i++) {
			cout << p[i].getName() << ":<Enter>\n\t\t";
			if (p[i].makeRandNum()) {
				cout << p[i].getName() << "�� �¸�!!" << endl;
				return false;
			}
			else {
				cout << "�ƽ�����!" << endl;
				return true;
			}
		}
	}
};