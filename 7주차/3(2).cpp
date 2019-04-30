#include <iostream>
using namespace std;

int big(int a, int b, int c=-1) {
	if (a > b)
	{
		if (b > c)
			return a;
	}
	else if (b > c)
		return b;
	else return c;
}
int main() {
	int x = big(3, 5);
	int y = big(300, 600);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}