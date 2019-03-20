#pragma once
#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int c, int w, int s) {//������
		this->coffee = c;
		this->water = w;
		this->sugar = s;
	}
	void drinkEspresso() {//Ŀ�� 1, �� 1 �Һ�
		this->coffee -= 1;
		this->water -= 1;
	}
	void drinkAmericano() {//Ŀ�� 1, �� 2 �Һ�
		this->coffee -= 1;
		this->water -= 2;
	}
	void drinkSugarCoffee() {//Ŀ��1, ��2, ���� 1 �Һ�
		this->coffee -= 1;
		this->water -= 2;
		this->sugar -= 1;
	}
	void fill() {//Ŀ�� 10, �� 10, ���� 10���� ä���
		this->coffee = 10;
		this->water = 10;
		this->sugar = 10;
	}
	void show() {//���� Ŀ�� �ӽ��� ���� ���
		cout << "Ŀ�� �ӽ� ����, Ŀ��: " << this->coffee << "  ��: " << this->water << "  ����: " << this->sugar << endl;
	}

};