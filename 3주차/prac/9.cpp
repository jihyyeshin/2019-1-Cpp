/*
�ǽ�����09

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
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