/*
�ǽ�����16

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	char alphabet=0;
	int i = 0;
	int alphaTotal = 0;
	int alphaNum[26] = {0,};//���ĺ� ������ ���� �־��ִ� �迭

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n";
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
	getline(cin, str, ';');//string �Է�

	/*���ĺ� ã��*/
	for (i = 0; i < str.length(); i++) {//string���� ���ĺ��� ã�� ����
		if (isalpha(str.at(i))) {
			alphabet = tolower(str.at(i));
			alphaNum[alphabet - 'a']++;
			alphaTotal++;
		}
	}

	/*���*/
	cout << "�� ���ĺ� �� " << alphaTotal << "\n\n";
	for (i = 0; i < 26 ; i++) {
		cout << char('a' + i) << " (" << alphaNum[i] << ")\t: ";
		for (int j = 0; j < alphaNum[i]; j++)
			cout << '*';
		cout << endl;
	}
	return 0;
}
