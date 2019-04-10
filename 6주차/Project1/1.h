
#pragma once
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return radius * radius*3.14;
	}
};
/*참조형 변수를 이용하여 swap연산을 한다.
참조형 변수는 
int b;
int &a=b;
이런 식으로 선언되며, 일반 변수의 별칭으로 생각할 수 있다.
참조형 변수는 함수에서 호출할 때 (call by reference) 사용되는 경우가 많은데,
이 이유는 
swap(int &a, int &b){
}
swap(value1, value2);
이런 식으로 사용되었을 때
a, b가 각각 value1, value2의 참조형 변수가 되어
같은 "주소 공간"을 가진 다른 이름일 뿐이기 때문에
a, b를 수정했을 떄 value1, 2에도 영향을 미치게 된다.
*/
void swap(Circle &a, Circle &b) {
	Circle temp;
	temp = a;
	a = b;
	b = temp;
}
