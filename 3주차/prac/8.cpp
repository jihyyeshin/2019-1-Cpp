/*
�ǽ�����08

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/

#include "8.h"

int main() {
	Integer n(30);
	cout << n.get() << ' ';//30���
	n.set(50);
	cout << n.get() << ' ';//50���

	Integer m("300");
	cout << m.get() << ' ';//300���
	cout << m.isEven(); //true(������ 1)���
}