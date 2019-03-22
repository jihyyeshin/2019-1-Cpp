/*
실습문제06

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/

#include <iostream>
#include <ctime>
using namespace std;
class EvenRandom {
private:
	int randNum;
public:
	EvenRandom() {
		srand((unsigned)time(0));
	}
	int next() {
		while (true) {
			randNum = rand();
			if (randNum % 2 == 0)
				return randNum;
		}
	}
	int nextInRange(int low, int high) {
		int range = (high - low) + 1;
		while (true) {
			randNum = low + rand() % range;
			if (randNum % 2 == 0)
				return randNum;
		}
	}
};
int main() {
	EvenRandom er;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.next();//0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 " << "10 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.nextInRange(2, 10);//2에서 10사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;
}