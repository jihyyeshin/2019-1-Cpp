#include "11.h"

int main() {
	int num;
	CoffeeVendingMachine c;
	while (true) {
		cout << "�޴��� �����ּ��� (1:���������� 2:�Ƹ޸�ī�� 3:����Ŀ�� 4:�ܷ����� 5:ä���)>>>";
		cin >> num;
		c.run(num);
	}
}