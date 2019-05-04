#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; 	this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
	Book& operator +=(int price);
	Book& operator -=(int price);
};

Book& Book::operator+=(int price) {
	this->price += price;
	return *this;
}

Book& Book::operator-=(int price) {
	this->price -= price;
	return *this;
}
