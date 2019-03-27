#include <stdio.h>

struct cracker {//구조체 선언
	int price;
	int calories;
};

int main() {
	struct cracker c;
	printf("크래커의 가격과 열량을 입력하세요: ");
	scanf_s("%d%d", &c.price, &c.calories);
	printf("크래커의 가격: %d원\n크래커의 열량 : %dkcal\n", c.price , c.calories);
}