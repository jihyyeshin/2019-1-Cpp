/*
실습문제02

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
#include "2.h"

int main() {
	date birth(2014, 3, 20);
	date independenceday("1945/8/15");
	independenceday.show();
	cout << birth.getyear() << ',' << birth.getmonth() << ',' << birth.getday() << endl;
}