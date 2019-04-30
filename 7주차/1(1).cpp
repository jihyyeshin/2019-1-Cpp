#include <iostream>
using namespace std;

//(1)
int add(int *a, int index) {
	int sum = 0;
	for (int i = 0; i < index; i++)
		sum += a[i];
	return sum;
}
int add(int *a, int index, int *b) {
	int sum = 0;
	for (int i = 0; i < index; i++)
		sum += (a[i] + b[i]);
	return sum;
}
int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}