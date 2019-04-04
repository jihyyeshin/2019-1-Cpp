#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person *p;//Person 배열 포인터
	int size;//Person 배열의 크기, 가족 구성원 수
public:
	Family(string name, int size);//size개수만큼 Person배열 동적 생성
	void show();//모든 가족 구성원 출력
	~Family();
};

int main() {


	return 0;
}