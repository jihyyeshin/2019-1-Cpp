#pragma once
#include <iostream>
using namespace std;

class MyIntStack {
	int *p;
	int size;
	int tos;//������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(MyIntStack& s);
	~MyIntStack();
	bool push(int n);//���� nǪ��. ���������� false, �ƴϸ� true
	bool pop(int &n);//���Ͽ� n�� ����. ������ ��������� false, �ƴϸ� true����
};

MyIntStack::MyIntStack() {
	this->tos = 0;
	this->size = 10;
	p = new int[size];
}

MyIntStack::MyIntStack(int size) {
	p = new int[size];
	this->size = size;
	this->tos = 0;
}
MyIntStack::MyIntStack(MyIntStack& s) {
	this->size = s.size;
	p = new int[s.size];
	this->tos = s.tos;
}
MyIntStack::~MyIntStack() {
	delete[] p;
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