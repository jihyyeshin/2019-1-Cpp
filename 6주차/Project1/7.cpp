#include "7.h"

int main() {
	MyIntStack a;
	for (int i = 0; i<11; i++) { // 11���� Ǫ��
		if (a.push(i)) cout << i << ' '; // Ǫ�õ� �� ����
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for (int i = 0; i<11; i++) { // 11�� ��
		if (a.pop(n)) cout << n << ' '; // �� �� �� ���
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}