#pragma once
#include <iostream>
using namespace std;
class Statistics {
	int *data;
	int num;
public:
	Statistics() {
		num = 0;
		data = new int[10];
	}
	bool operator!();
	Statistics& operator<<(int x);
	void operator>>(int &avg);
	void operator~();
};

bool Statistics::operator!() {
	if (num == 0)return true;
	else return false;
}
Statistics& Statistics::operator<<(int x) {
	data[num] = x;
	num++;
	return *this;
}
void Statistics::operator>>(int &avg) {
	int sum = 0;
	for (int i = 0; i < num; i++)
		sum += data[i];
	avg = sum / num;
}
void Statistics::operator~() {
	for (int i = 0; i < num; i++) {
		cout << data[i] << " ";
	}
}