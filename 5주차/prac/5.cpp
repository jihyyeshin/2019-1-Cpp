#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
	string str;
	srand((unsigned int)time(0));//����
	int buf;//string�� ����� ��ġ
	char alpha;//������ ���ĺ�
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)\n";
	while (true) {
		cout << ">>";
		getline(cin, str);
		if (str.compare("exit") == 0)//���� �޽���
			return 0;
		buf = rand() % str.length();
		alpha = rand() % 26 + 97;
		str[buf] = alpha;//���ĺ� ����
		cout << str << endl;//����� ���� ���
	}
}