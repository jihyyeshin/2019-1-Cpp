#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int sum = 0;
	int i = 0;
	cout << "���ڿ� �Է�>>";
	getline(cin, str);
	/*3(1)*/
	for (int i = 0; i < str.length(); i++)
	{
		if (str.at(i) == 'a')
			sum++;
	}
	cout << "���� a�� " << sum << "�� �ֽ��ϴ�." << endl;
	/*3(2)*/
	sum = 0; i = -1;
	while (str.find('a', i+1) != str.npos) {
		i = str.find('a', i+1);
		sum++;
	}
	cout << "���� a�� " << sum << "�� �ֽ��ϴ�." << endl;

}
