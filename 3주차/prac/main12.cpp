/*
�ǽ�����12

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/

#include <iostream>
#include "Ram.h"
using namespace std;

int main() {
	Ram ram;
	ram.write(100, 20);//100������ 20 ����
	ram.write(101, 30);//101������ 30 ����
	char res = ram.read(100) + ram.read(101);//20+30=50
	ram.write(102, res);//102������ 50����
	cout << "102 ������ �� = " << (int)ram.read(102) << endl;//102���� �� ���
}