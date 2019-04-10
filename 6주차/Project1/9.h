#pragma once
#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value);
	Accumulator& add(int n);
	int get();
};
//�Ű����� value�� ��� value�� �ʱ�ȭ�Ѵ�.
Accumulator::Accumulator(int value) {
	this->value = value;
}
//value�� n�� ���� ���� �����Ѵ�.
Accumulator& Accumulator::add(int n) {
	this->value += n;
	return *this;
}
//������ �� value�� �����Ѵ�.
int Accumulator::get() {
	return this->value;
}