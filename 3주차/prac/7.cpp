/*
실습문제07

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/

#include <iostream>
#include <ctime>
using namespace std;
class SelecttableRandom {
private:
	int randNum;
	int isOdd;
public:
	SelecttableRandom(bool isOdd) {
		this->isOdd = isOdd;
		srand((unsigned)time(0));
	}
	int next() {
		while (true) {
			randNum = rand();
			if (randNum % 2 == isOdd)
				return randNum;
		}

	}
	int nextInRange(int low, int high) {
		int range = (high - low) + 1;
		while (true) {
			randNum = low + rand() % range;
			if (randNum % 2 == isOdd)
				return randNum;
		}

	}
};
int main() {
	SelecttableRandom sr1(0);//짝수
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr1.next();//0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	SelecttableRandom sr2(1);//홀수
	cout << endl << endl << "--2에서 " << "9 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr2.nextInRange(2, 9);//2에서 9사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;
}