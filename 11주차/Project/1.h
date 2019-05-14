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
	Book& operator+=(int price);
	Book& operator-=(int price);
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
};

Book& Book::operator+=(int price) {
	this->price += price;
	return *this;
}
Book& Book::operator-=(int price) {
	this->price += price;
	return *this;
}