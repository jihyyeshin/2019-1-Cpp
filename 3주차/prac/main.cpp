/*
�ǽ�����11

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
using namespace std;
#include "Box.h"

int main() {
	Box b(10, 2);
	b.draw();//�ڽ��� �׸���.
	cout << endl;
	b.setSize(7, 4);//�ڽ��� ũ�⸦ �����Ѵ�.
	b.setFill('^');//�ڽ��� ���θ� ä�� ���ڸ� '^'���� �����Ѵ�.
	b.draw();//�ڽ��� �׸���.
}