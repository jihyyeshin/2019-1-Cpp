#include "6.h"
int main() {
	int i = 0;
	int x[5], y[5];
	cout << "������ 5�� �Է��϶�. �迭 x�� �����Ѵ�>>";
	for (i; i < 5; i++)
		cin >> x[i];
	cout << "������ 5�� �Է��϶�. �迭 y�� �����Ѵ�>>";
	for (i=0; i < 5; i++)
		cin >> y[i];
	cout << "��ģ ���� �迭�� ����Ѵ�.\n";
	int *conArr=ArrayUtility2::concat(x, y, 5);
	for (int i = 0; i < 10; i++)
		cout << conArr[i]<<' ';
	int ret = 0;
	int *reArr = ArrayUtility2::remove(x, y, 5, ret);
	cout << "\n�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << ret << endl;
	for (int i = 0; i < ret; i++)
		cout << reArr[i]<<' ';
}