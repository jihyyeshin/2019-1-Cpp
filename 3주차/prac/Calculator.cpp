///*
//�ǽ�����10-1
//
//�а�: ��ǻ�Ͱ��а�
//�й�: 2016112127
//�̸�: ������
//*/
//#include <iostream>
//using namespace std;
//
//class Cal {//�߻� Ŭ����
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
//class Add :public Cal {//����
//public:
//	int calculate();
//};
//int Add::calculate() {
//	return a + b;
//}
//
//class Sub :public Cal {//����
//public:
//	int calculate();
//};
//int Sub::calculate() {
//	return a - b;
//}
//
//class Mal :public Cal {//����
//public:
//	int calculate();
//};
//int Mal::calculate() {
//	return a * b;
//}
//
//class Div :public Cal {//������
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
//		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
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