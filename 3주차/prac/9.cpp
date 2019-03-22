/*
실습문제09

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/

#include <iostream>
#include "9.h"
using namespace std;

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}