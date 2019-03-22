#pragma once
#include <iostream>
using namespace std;

class Oval {
	int width;
	int height;
public:
	Oval(int w, int h);
	Oval();
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};
Oval::Oval(int w, int h) {
	this->width = w;
	this->height = h;
}
Oval::Oval() {
	this->width = 1;
	this->height = 1;
}
Oval::~Oval() {
	cout << "--¼Ò¸êÀÚ--" << endl;
	cout << "width : " << this->width << endl;
	cout << "height : " << this->height << endl;
}
int Oval::getWidth() {
	return width;
}
int Oval::getHeight() {
	return height;
}
void Oval::set(int w, int h) {
	this->width = w;
	this->height = h;
}
void Oval::show() {
	cout << "width : " << this->width << endl;
	cout << "height : " << this->height << endl;
}