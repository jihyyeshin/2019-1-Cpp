#include <iostream>
using namespace std;
class Crack{
public:
	typedef struct cracker {//구조체 선언
		int price;
		int calories;
	};
};


int main() {
	Crack::cracker c;
	cout << "크래커의 가격과 열량을 입력하세요: ";
	cin >> c.price >> c.calories;
	cout << "크래커의 가격: " << c.price << "원\n크래커의 열량 : " << c.calories << "kcal\n";
}