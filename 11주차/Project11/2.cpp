#include<string>
#include"2.h"
int main() {
	NamedCircle pizza[5];
	string name;
	int radius;
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
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
	cout << "가장 면적이 큰 피자는 " << pizza[num].getName()
		<< "입니다." << endl;
}