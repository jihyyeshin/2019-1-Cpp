#include "7.h"

int main() {
	Random::seed();
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i<10; i++) cout << Random::nextInt(1, 100) << ' ';

	cout << "\n���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
	for (int i = 0; i<10; i++) cout << Random::nextAlphabet() << ' ';

	cout << "\n������ �Ǽ��� 10���� ����մϴ�" << endl;
	for (int i = 0; i<5; i++) cout << Random::nextDouble() << ' ';
	cout << endl;
	for (int i = 0; i<5; i++) cout << Random::nextDouble() << ' ';
	cout << endl;
}
