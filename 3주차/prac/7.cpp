/*
�ǽ�����07

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
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
	SelecttableRandom sr1(0);//¦��
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr1.next();//0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	SelecttableRandom sr2(1);//Ȧ��
	cout << endl << endl << "--2���� " << "9 ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr2.nextInRange(2, 9);//2���� 9������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}