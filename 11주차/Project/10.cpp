#include<iostream>
#include"10.h"
using namespace std;
int main() {
	Statistics stat;
	if (!stat)cout << "���� ��� ����Ÿ�� �����ϴ�." << endl;

	int x[5];
	cout << "5���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++)cin >> x[i];
	for (int i = 0; i < 5; i++)stat << x[i];
	stat << 100 << 200;
	//������ �ι������ϱ⶧���� *this�� ��ȯ�ؾ��Ѵ�.
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}