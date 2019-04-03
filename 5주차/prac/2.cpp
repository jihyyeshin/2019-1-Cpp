#include <iostream>
using namespace std;

int main() {
	int *arr=new int[5];//동적할당 배열
	double avg = 0;
	cout << "정수 5개 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		avg += arr[i];
	}
	cout << "평균 " << avg / 5.0 << endl;
	delete[] arr;//배열 소멸
}