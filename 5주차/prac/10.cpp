#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person *p;//Person �迭 ������
	int size;//Person �迭�� ũ��, ���� ������ ��
public:
	Family(string name, int size);//size������ŭ Person�迭 ���� ����
	void show();//��� ���� ������ ���
	~Family();
};

int main() {


	return 0;
}