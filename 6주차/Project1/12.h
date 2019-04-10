#pragma once
#include <iostream>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	Dept(Dept& dept);
	~Dept() {}//소멸자
	int getSize() { return size; }
	void read();
	bool isOver60(int index);
};
Dept::Dept(Dept& dept) {
	this->size = dept.size;
	scores = new int[this->size];
	for (int i = 0; i < size; i++)
		this->scores[i] = dept.scores[i];
}
void Dept::read() {
	cout << size << "개 점수 입력>> ";
	for (int i = 0; i < size; i++)
		cin >> this->scores[i];
}
bool Dept::isOver60(int index) {
	if (this->scores[index] > 60)
		return true;
	else return false;
}
int countPass(Dept dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i))count++;
	}
	return count;
}