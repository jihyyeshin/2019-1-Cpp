/*7���� ������ ��������� �̿��Ѵ�.*/
#include "7.h"

int main() {
	Circle *c;
	int r_buf;
	int c_num;//���� ����
	int count = 0;//������ 100���� ū ���� ����
	cout << "���� ���� >> ";
	cin >> c_num;
	c = new Circle[c_num];
	for (int i = 0; i < c_num; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r_buf;
		c[i].setRadius(r_buf);//������ �Է�
		if (c[i].getArea() > 100)//���� ������ 100���� ũ��
			count++;
	}
	cout << "������ 100���� ū ���� ������ " << count << "�� �̴�." << endl;
	return 0;
}