#include<iostream>
#include"5.h"
using namespace std;

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "����� ����"<<endl;
	else
		cout << "����� �ƴ�"<<endl;
}