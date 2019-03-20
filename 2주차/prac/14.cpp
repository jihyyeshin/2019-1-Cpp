/*
실습문제14

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int num;
	char coffee[100];
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원" << endl;
	while (true) {
		cout << "주문>>";
		cin >> coffee >> num;
		if (strcmp(coffee, "에스프레소") == 0) {
			sum += 2000 * num;
			cout << 2000 * num << "원입니다. 맛있게 드세요"<<endl;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			sum += 2500 * num;
			cout << 2500 * num << "원입니다. 맛있게 드세요" << endl;
		}
		else {
			sum += 2300 * num;
			cout << 2300 * num << "원입니다. 맛있게 드세요" << endl;
		}
		
		if (sum >= 20000)
		{
			cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봬요~~~\n";
			return 0;
		}
		
	}

	return 0;
}