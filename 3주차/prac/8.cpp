/*
실습문제08

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/

#include "8.h"

int main() {
	Integer n(30);
	cout << n.get() << ' ';//30출력
	n.set(50);
	cout << n.get() << ' ';//50출력

	Integer m("300");
	cout << m.get() << ' ';//300출력
	cout << m.isEven(); //true(정수로 1)출력
}