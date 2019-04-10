#pragma once
#include <iostream>
using namespace std;

class MyIntStack {
	int p[10];//최대 10개의 정수 저장
	int tos;//스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack();
	bool push(int n);//정수 n푸시. 꽉차있으면 false, 아니면 true
	bool pop(int &n);//팝하여 n에 저장. 스택이 비어있으면 false, 아니면 true리턴
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