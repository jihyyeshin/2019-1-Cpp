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
	Account(string name, int id, int money) {//생성자
		this->name = name;
		this->id = id;
		this->money = money;
	}
	void deposit(int earning) {//입금
		this->money += earning;
	}
	int withdraw(int spending) {//출금
		this->money -= spending;
		return this->money;
	}
	string getOwner() {//owner출력
		return this->name;
	}
	int inquiry() {//남은 돈
		return this->money;
	}

};
