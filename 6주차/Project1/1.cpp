#include "1.h"

int main() {
	Circle a(1), b(2);
	cout << "a의 area = " << a.getArea()
		<< "\nb의 area  = " << b.getArea();
	cout << "\nswap 함수 사용...\n";
	swap(a, b);
	cout << "a의 area = " << a.getArea()
		<< "\nb의 area  = " << b.getArea() << endl;
}