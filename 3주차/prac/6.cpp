/*
�ǽ�����06

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
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
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.next();//0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "--2���� " << "10 ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.nextInRange(2, 10);//2���� 10������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}