#include <iostream>
#include "Ram.h"
using namespace std;

Ram::Ram() {//mem배열을 0으로 초기화하고 size를 100*1024로 초기화
	for (int i = 0; i < sizeof(mem) / sizeof(mem[0]); i++)
		mem[i] = '0';
}
Ram::~Ram() {//"메모리 제거됨"문자열 출력
	cout << "메모리 제거됨" << endl;
}
char Ram::read(int address) {//address 주소의 메모리 바이트 리턴
	return mem[address];
}
void Ram::write(int address, char value) {//address주소에 한 바이트로 value 저장
	mem[address] = value;
}