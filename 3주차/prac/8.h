#pragma once
#include <iostream>
#include <string>
using namespace std;

class Integer {
	int number;
public:
	Integer(int number) {//정수인 경우의 생성자
		this->number = number;
	}
	Integer(string sToI) {//문자열인 경우의 생성자
		this->number = stoi(sToI);//number로 바꿔줌
	}
	int get() {//정수 출력
		return this->number;
	}
	void set(int number) {//number에 set
		this->number = number;
	}
	bool isEven() {//짝수 판별
		if (this->number % 2 == 0)
			return true;
		else
			return false;
	}
};
