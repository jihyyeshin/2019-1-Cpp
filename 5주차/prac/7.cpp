#include "7.h"

int main() {
	Circle c[3];
	int r_buf;
	int count = 0;//������ 100���� ū ���� ����
	cout << "���� �������� 3�� �Է��϶�." << endl;
	for (int i = 0; i < 3; i++) {
		cout << ">> ";
		cin >> r_buf;
		c[i].setRadius(r_buf);//������ �Է�
		if (c[i].getArea() > 100)//���� ������ 100���� ũ��
			count++;
	}
	cout << "������ 100���� ū ���� ������ " << count << "�� �̴�." << endl;
	return 0;
}