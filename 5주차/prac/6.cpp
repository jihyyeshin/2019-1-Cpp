#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)\n";
	while (true) {
		cout << ">>";
		getline(cin, str);
		if (str.compare("exit") == 0)//���� �޽���
			return 0;
		for (int i = str.length() - 1; i >= 0; i--)
			cout << str[i];
		cout << endl;
		//cout << str << endl;//����� ���� ���
	}
}