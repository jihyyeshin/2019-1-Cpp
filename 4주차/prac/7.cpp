#include <iostream>
using namespace std;
class Crack{
public:
	typedef struct cracker {//����ü ����
		int price;
		int calories;
	};
};


int main() {
	Crack::cracker c;
	cout << "ũ��Ŀ�� ���ݰ� ������ �Է��ϼ���: ";
	cin >> c.price >> c.calories;
	cout << "ũ��Ŀ�� ����: " << c.price << "��\nũ��Ŀ�� ���� : " << c.calories << "kcal\n";
}