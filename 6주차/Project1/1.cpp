#include "1.h"

int main() {
	Circle a(1), b(2);
	cout << "a�� area = " << a.getArea()
		<< "\nb�� area  = " << b.getArea();
	cout << "\nswap �Լ� ���...\n";
	swap(a, b);
	cout << "a�� area = " << a.getArea()
		<< "\nb�� area  = " << b.getArea() << endl;
}