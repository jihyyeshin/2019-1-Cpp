#include <stdio.h>

struct cracker {//����ü ����
	int price;
	int calories;
};

int main() {
	struct cracker c;
	printf("ũ��Ŀ�� ���ݰ� ������ �Է��ϼ���: ");
	scanf_s("%d%d", &c.price, &c.calories);
	printf("ũ��Ŀ�� ����: %d��\nũ��Ŀ�� ���� : %dkcal\n", c.price , c.calories);
}