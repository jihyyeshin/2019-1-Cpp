#pragma once
#include <iostream>
using namespace std;

class MyIntStack {
	int *p;
	int size;
	int tos;//스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(MyIntStack& s);
	~MyIntStack();
	bool push(int n);//정수 n푸시. 꽉차있으면 false, 아니면 true
	bool pop(int &n);//팝하여 n에 저장. 스택이 비어있으면 false, 아니면 true리턴
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