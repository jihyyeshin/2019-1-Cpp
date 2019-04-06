#include "12.h"
int main() {
	int cNum;//원의 개수
	cout << "원의 개수 >> ";
	cin >> cNum;
	CircleManager cm(cNum);
	cm.searchByName();
	cm.searchByArea();
	return 0;
}