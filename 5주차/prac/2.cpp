#include <iostream>
using namespace std;

int main() {
	int *arr=new int[5];//�����Ҵ� �迭
	double avg = 0;
	cout << "���� 5�� �Է�>>";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		avg += arr[i];
	}
	cout << "��� " << avg / 5.0 << endl;
	delete[] arr;//�迭 �Ҹ�
}