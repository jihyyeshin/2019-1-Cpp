/*
�ǽ�����04

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
using namespace std;

int main(void) {
	double num[5];
	double max = 0;
	cout << "�� ���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		if (num[i] > max)
			max = num[i];
	}
	cout << "���� ū �� = " << max << endl;

	return 0;
}