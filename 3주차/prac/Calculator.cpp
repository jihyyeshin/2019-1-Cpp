///*
//실습문제10-1
//
//학과: 컴퓨터공학과
//학번: 2016112127
//이름: 신지혜
//*/
//#include <iostream>
//using namespace std;
//
//class Cal {//추상 클래스
//protected:
//	int a;
//	int b;
//public:
//	void setValue(int x, int y);
//	virtual int calculate() = 0;
//};
//void Cal::setValue(int x, int y) {
//	this->a = x;
//	this->b = y;
//}
//
//class Add :public Cal {//덧셈
//public:
//	int calculate();
//};
//int Add::calculate() {
//	return a + b;
//}
//
//class Sub :public Cal {//뺄셈
//public:
//	int calculate();
//};
//int Sub::calculate() {
//	return a - b;
//}
//
//class Mal :public Cal {//곱셈
//public:
//	int calculate();
//};
//int Mal::calculate() {
//	return a * b;
//}
//
//class Div :public Cal {//나눗셈
//public:
//	int calculate();
//};
//int Div::calculate() {
//	return a / b;
//}
//
//int main() {
//	int x, y;
//	char oper;
//	Add a;
//	Sub s;
//	Mal m;
//	Div d;
//	while (true) {
//		cout << "두 정수와 연산자를 입력하세요>>";
//		cin >> x >> y >> oper;
//		switch (oper) {
//		case('+'):
//			a.setValue(x, y);
//			cout << a.calculate() << endl;
//			break;
//		case('-'):
//			s.setValue(x, y);
//			cout << s.calculate() << endl;
//			break;
//		case('*'):
//			m.setValue(x, y);
//			cout << m.calculate() << endl;
//			break;
//		case('/'):
//			d.setValue(x, y);
//			cout << d.calculate() << endl;
//			break;
//		}
//	}
//}