#include "12.h"
int main() {
	int cNum;//���� ����
	cout << "���� ���� >> ";
	cin >> cNum;
	CircleManager cm(cNum);
	cm.searchByName();
	cm.searchByArea();
	return 0;
}