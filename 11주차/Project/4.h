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
	friend bool operator<(string title, Book op1);
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
};
bool operator <(string title, Book op1) {
	if (title < op1.title)return true;
	else return false;
}