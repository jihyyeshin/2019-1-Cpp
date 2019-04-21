#include "6.h"
int main() {
	int i = 0;
	int x[5], y[5];
	cout << "정수를 5개 입력하라. 배열 x에 삽입한다>>";
	for (i; i < 5; i++)
		cin >> x[i];
	cout << "정수를 5개 입력하라. 배열 y에 삽입한다>>";
	for (i=0; i < 5; i++)
		cin >> y[i];
	cout << "합친 정수 배열을 출력한다.\n";
	int *conArr=ArrayUtility2::concat(x, y, 5);
	for (int i = 0; i < 10; i++)
		cout << conArr[i]<<' ';
	int ret = 0;
	int *reArr = ArrayUtility2::remove(x, y, 5, ret);
	cout << "\n배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << ret << endl;
	for (int i = 0; i < ret; i++)
		cout << reArr[i]<<' ';
}