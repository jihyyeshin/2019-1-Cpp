#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price;
public:
	Book(string title, int price);
	~Book();
	void set(string title, int price);
	void show() { cout << title << ' ' << price << "¿ø" << endl; }
};

Book::Book(string title, int price) {
	this->title = title;
	this->price = price;
}

Book::~Book() {
}
void Book::set(string title, int price) {
	this->title = title;
	this->price = price;
}