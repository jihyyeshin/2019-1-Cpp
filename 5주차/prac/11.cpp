#include "11.h"

int main() {
	int num;
	CoffeeVendingMachine c;
	while (true) {
		cout << "메뉴를 눌러주세요 (1:에스프레소 2:아메리카노 3:설탕커피 4:잔량보기 5:채우기)>>>";
		cin >> num;
		c.run(num);
	}
}