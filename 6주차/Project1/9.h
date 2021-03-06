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
//매개변수 value로 멤버 value를 초기화한다.
Accumulator::Accumulator(int value) {
	this->value = value;
}
//value에 n을 더해 값을 누적한다.
Accumulator& Accumulator::add(int n) {
	this->value += n;
	return *this;
}
//누적된 값 value를 리턴한다.
int Accumulator::get() {
	return this->value;
}