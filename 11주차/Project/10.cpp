#include<iostream>
#include"10.h"
using namespace std;
int main() {
	Statistics stat;
	if (!stat)cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++)cin >> x[i];
	for (int i = 0; i < 5; i++)stat << x[i];
	stat << 100 << 200;
	~stat;//~stat이 수행

	int avg;
	stat >> avg;
	cout << "\navg=" << avg << endl;
}