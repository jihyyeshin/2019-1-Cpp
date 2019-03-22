///*
//실습문제05
//
//학과: 컴퓨터공학과
//학번: 2016112127
//이름: 신지혜
//*/
//
//#include <iostream>
//#include <ctime>
//using namespace std;
//class Random {
//private:
//	int randNum;
//public:
//	Random() {
//		srand((unsigned)time(0));
//	}
//	int next() {
//		randNum = rand();
//		return randNum;
//	}
//	int nextInRange(int low, int high) {
//		int range = (high - low) + 1;
//		randNum = low + rand() % range;
//		return randNum;
//	}
//};
//int main() {
//	Random r;
//	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.next();//0에서 RAND_MAX(32767) 사이의 랜덤한 정수
//		cout << n << ' ';
//	}
//	cout << endl << endl << "--2에서 " << "4 까지의 랜덤 정수 10개 --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextInRange(2, 4);//2에서 4사이의 랜덤한 정수
//		cout << n << ' ';
//	}
//	cout << endl;
//}