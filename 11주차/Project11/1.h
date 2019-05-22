#include<string>
#include<iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
};
class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius, string name) {
		this->name = name;
		setRadius(radius);
	}
	void show() {
		cout << "�������� " << getRadius()
			<< "�� " << name << endl;
	}
};