///*
//�ǽ�����05
//
//�а�: ��ǻ�Ͱ��а�
//�й�: 2016112127
//�̸�: ������
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
//	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.next();//0���� RAND_MAX(32767) ������ ������ ����
//		cout << n << ' ';
//	}
//	cout << endl << endl << "--2���� " << "4 ������ ���� ���� 10�� --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextInRange(2, 4);//2���� 4������ ������ ����
//		cout << n << ' ';
//	}
//	cout << endl;
//}