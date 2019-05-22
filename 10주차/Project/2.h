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
	bool operator==(int price);
	bool operator==(string title);
	bool operator==(Book op1);
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
};
bool Book::operator==(int price) {
	if (this->price == price)return true;
	else return false;
}
bool Book::operator==(string title) {
	if (this->title == title)return true;
	else return false;
}
bool Book::operator==(Book op1) {
	if (price == op1.price&&title == op1.title&&pages == op1.pages)return true;
	else return false;
}