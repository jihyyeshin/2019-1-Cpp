#pragma once
#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;

class Histogram {
	string inputStr;//입력된 문자열
public:
	Histogram(string inputStr);//문자열 initial
	void put(string addStr);//문자열 추가
	void putc(char addC);//문자 추가
	void print();//문자 알파벳 출력
};

Histogram::Histogram(string inputStr) {//문자열 initial
	this->inputStr = inputStr + "\n";
}
void Histogram::put(string addStr) {//문자열 추가
	inputStr.append(addStr);
}
void Histogram::putc(char addC) {//문자 추가
	string buf(1, addC);
	inputStr.append(buf);
}
void Histogram::print() {//문자 알파벳 출력
	cout << inputStr;
	int i, j;
	int countAlpha[26] = { 0, };//알파벳 수 저장
	int countAll = 0; //알파벳 총 저장
	char buf;//알파벳 임시저장
	for (i = 0; i < inputStr.length(); i++) {
		buf = tolower(inputStr[i]);
		if (buf >= 97 && buf <= 122) {
			countAlpha[buf - 97]++;
			countAll++;
		}
	}
	cout << "\n총 알파벳 수 " << countAll << endl;
	for (i = 0; i < 26; i++) {
		cout << char(97 + i) << " (" << countAlpha[i] << ")\t: ";
		for (j = 0; j < countAlpha[i]; j++)
			cout << "*";
		cout << endl;
	}
}