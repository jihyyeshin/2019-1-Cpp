#pragma once
#include <iostream>
using namespace std;

class MyVector {
	int *mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector() { delete[]mem; }
};

MyVector::MyVector(int n = 100, int val = 0) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) {
		mem[i] = val;
		cout << mem[i] << ' ';//테스트 출력 프로그램
	}
	cout << endl;
}
