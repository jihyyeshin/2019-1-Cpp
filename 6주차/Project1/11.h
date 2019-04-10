#pragma once
#include <iostream>
using namespace std;

class Book {
	char *title;
	int price;
public:
	Book(const char*title, int price);
	Book(Book& b);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "¿ø" << endl; }
};

Book::Book(const char*title, int price) {
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}

/*
Book::Book(Book& b) { // (2)
title = b.title;
price = b.price;
}
*/

Book::Book(Book& b) {//(3)
	this->title = new char[strlen(b.title) + 1];
	strcpy(this->title, b.title);
	this->price = b.price;
}


Book::~Book() {
	if (title)
		delete[] title;
}
void Book::set(const char* title, int price) {
	if (this->title)
		delete[] this->title;

	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}