#pragma once
#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name;
	int id;
	int money;
public:
	Account(string name, int id, int money) {//������
		this->name = name;
		this->id = id;
		this->money = money;
	}
	void deposit(int earning) {//�Ա�
		this->money += earning;
	}
	int withdraw(int spending) {//���
		this->money -= spending;
		return this->money;
	}
	string getOwner() {//owner���
		return this->name;
	}
	int inquiry() {//���� ��
		return this->money;
	}

};
