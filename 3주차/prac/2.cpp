/*
�ǽ�����02

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
#include "2.h"

int main() {
	date birth(2014, 3, 20);
	date independenceday("1945/8/15");
	independenceday.show();
	cout << birth.getyear() << ',' << birth.getmonth() << ',' << birth.getday() << endl;
}