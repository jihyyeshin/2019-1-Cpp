#pragma once
#include <iostream>
#include <string>
using namespace std;

class Integer {
	int number;
public:
	Integer(int number) {//������ ����� ������
		this->number = number;
	}
	Integer(string sToI) {//���ڿ��� ����� ������
		this->number = stoi(sToI);//number�� �ٲ���
	}
	int get() {//���� ���
		return this->number;
	}
	void set(int number) {//number�� set
		this->number = number;
	}
	bool isEven() {//¦�� �Ǻ�
		if (this->number % 2 == 0)
			return true;
		else
			return false;
	}
};
