#pragma once
#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;

class Histogram {
	string inputStr;//�Էµ� ���ڿ�
public:
	Histogram(string inputStr);//���ڿ� initial
	void put(string addStr);//���ڿ� �߰�
	void putc(char addC);//���� �߰�
	void print();//���� ���ĺ� ���
};

Histogram::Histogram(string inputStr) {//���ڿ� initial
	this->inputStr = inputStr + "\n";
}
void Histogram::put(string addStr) {//���ڿ� �߰�
	inputStr.append(addStr);
}
void Histogram::putc(char addC) {//���� �߰�
	string buf(1, addC);
	inputStr.append(buf);
}
void Histogram::print() {//���� ���ĺ� ���
	cout << inputStr;
	int i, j;
	int countAlpha[26] = { 0, };//���ĺ� �� ����
	int countAll = 0; //���ĺ� �� ����
	char buf;//���ĺ� �ӽ�����
	for (i = 0; i < inputStr.length(); i++) {
		buf = tolower(inputStr[i]);
		if (buf >= 97 && buf <= 122) {
			countAlpha[buf - 97]++;
			countAll++;
		}
	}
	cout << "\n�� ���ĺ� �� " << countAll << endl;
	for (i = 0; i < 26; i++) {
		cout << char(97 + i) << " (" << countAlpha[i] << ")\t: ";
		for (j = 0; j < countAlpha[i]; j++)
			cout << "*";
		cout << endl;
	}
}