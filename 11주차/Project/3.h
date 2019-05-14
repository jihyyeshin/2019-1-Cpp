#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	bool operator !();
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
};

bool Book::operator!() {
	if (this->price == 0)return true;
	else return false;
	// 주의  !(a) 값 자체를 리턴한다.
}