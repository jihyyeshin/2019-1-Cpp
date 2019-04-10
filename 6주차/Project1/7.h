#pragma once
#include <iostream>
using namespace std;

class MyIntStack {
	int p[10];//�ִ� 10���� ���� ����
	int tos;//������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack();
	bool push(int n);//���� nǪ��. ���������� false, �ƴϸ� true
	bool pop(int &n);//���Ͽ� n�� ����. ������ ��������� false, �ƴϸ� true����
};

MyIntStack::MyIntStack() {
	for (int i = 0; i < 10; i++)
		this->p[i] = 0;
	this->tos = 0;
}
bool MyIntStack::push(int n) {
	if (tos < 10) {
		this->p[tos++] = n;
		return true;
	}
	else return false;
}
bool MyIntStack::pop(int &n) {
	if (tos > 0) {
		n = this->p[--tos];
		return true;
	}
	else return false;
}