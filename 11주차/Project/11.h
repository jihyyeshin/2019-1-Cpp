#pragma once
#include <iostream>
using namespace std;
class Stack {
	int *list;
	int top;
	int maxNum;
public:
	Stack() {
		top = -1;
		maxNum = 10;
		list = new int[10];
	}
	Stack& operator<<(int push) {
		if (top == maxNum - 1)
			cout << "full" << endl;
		else
		{
			top++;
			list[top] = push;
		}
		return *this;
	}
	void operator>>(int &pop) {
		if (top == -1)
			cout << "empty" << endl;
		else
		{
			pop = list[top];
			top--;
		}
	}
	bool operator!() {
		if (top == -1)return true;
		else return false;
	}
};