#include <iostream>
#include "Ram.h"
using namespace std;

Ram::Ram() {//mem�迭�� 0���� �ʱ�ȭ�ϰ� size�� 100*1024�� �ʱ�ȭ
	for (int i = 0; i < sizeof(mem) / sizeof(mem[0]); i++)
		mem[i] = '0';
}
Ram::~Ram() {//"�޸� ���ŵ�"���ڿ� ���
	cout << "�޸� ���ŵ�" << endl;
}
char Ram::read(int address) {//address �ּ��� �޸� ����Ʈ ����
	return mem[address];
}
void Ram::write(int address, char value) {//address�ּҿ� �� ����Ʈ�� value ����
	mem[address] = value;
}