#include<iostream>
#include"10.h"
using namespace std;
int main() {
	Statistics stat;
	if (!stat)cout << "���� ��� �����Ͱ� �����ϴ�." << endl;

	int x[5];
	cout << "5���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++)cin >> x[i];
	for (int i = 0; i < 5; i++)stat << x[i];
	stat << 100 << 200;
	~stat;//~stat�� ����

	int avg;
	stat >> avg;
	cout << "\navg=" << avg << endl;
}