/*
�ǽ�����12

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
using namespace std;

int sum(int, int);

int main() {
	
	int n = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n) << " �Դϴ�.\n";
	return 0;
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = 0; k <= b; k++) {
		res += k;
	}
	return res;
}