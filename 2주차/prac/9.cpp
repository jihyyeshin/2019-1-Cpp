/*
실습문제09

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name,adr;
	int age;
	cout << "이름은?";
	getline(cin, name);
	cout << "주소는?";
	getline(cin, adr);
	cout << "나이는?";
	cin >> age;
	cout << name << ", " << adr << ", " << age << endl;
}