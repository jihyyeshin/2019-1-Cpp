#include<string>
#include"2.h"
int main() {
	NamedCircle pizza[5];
	string name;
	int radius;
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	int max = pizza[0].getArea();
	int num = -1;
	for (int i = 0; i < 5; i++)
	{
		if (max < pizza[i].getArea())
		{
			max = pizza[i].getArea();
			num = i;
		}
	}
	cout << "���� ������ ū ���ڴ� " << pizza[num].getName()
		<< "�Դϴ�." << endl;
}