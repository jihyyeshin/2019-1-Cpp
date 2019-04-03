#include <iostream>
using namespace std;

class Sample {
	int *p;
	int size;
public:
	Sample(int n) {//생성자
		size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};

void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
}
int Sample::big() {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < p[i])
			max = p[i];
	}
	return max;
}
Sample::~Sample() {
	delete[] p;
	cout << "배열이 소멸되었습니다." << endl;
}