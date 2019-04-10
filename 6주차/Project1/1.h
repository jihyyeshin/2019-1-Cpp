
#pragma once
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return radius * radius*3.14;
	}
};
/*������ ������ �̿��Ͽ� swap������ �Ѵ�.
������ ������ 
int b;
int &a=b;
�̷� ������ ����Ǹ�, �Ϲ� ������ ��Ī���� ������ �� �ִ�.
������ ������ �Լ����� ȣ���� �� (call by reference) ���Ǵ� ��찡 ������,
�� ������ 
swap(int &a, int &b){
}
swap(value1, value2);
�̷� ������ ���Ǿ��� ��
a, b�� ���� value1, value2�� ������ ������ �Ǿ�
���� "�ּ� ����"�� ���� �ٸ� �̸��� ���̱� ������
a, b�� �������� �� value1, 2���� ������ ��ġ�� �ȴ�.
*/
void swap(Circle &a, Circle &b) {
	Circle temp;
	temp = a;
	a = b;
	b = temp;
}
