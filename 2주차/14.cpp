/*
�ǽ�����14

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int num;
	char coffee[100];
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500��" << endl;
	while (true) {
		cout << "�ֹ�>>";
		cin >> coffee >> num;
		if (strcmp(coffee, "����������") == 0) {
			sum += 2000 * num;
			cout << 2000 * num << "���Դϴ�. ���ְ� �弼��"<<endl;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			sum += 2500 * num;
			cout << 2500 * num << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		else {
			sum += 2300 * num;
			cout << 2300 * num << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		
		if (sum >= 20000)
		{
			cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� �Ŀ�~~~\n";
			return 0;
		}
		
	}

	return 0;
}