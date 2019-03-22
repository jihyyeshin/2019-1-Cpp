/*
실습문제12

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/

#include <iostream>
#include "Ram.h"
using namespace std;

int main() {
	Ram ram;
	ram.write(100, 20);//100번지에 20 저장
	ram.write(101, 30);//101번지에 30 저장
	char res = ram.read(100) + ram.read(101);//20+30=50
	ram.write(102, res);//102번지에 50저장
	cout << "102 번지의 값 = " << (int)ram.read(102) << endl;//102번지 값 출력
}