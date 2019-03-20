#pragma once
#include <string>
#include <iostream>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(string date) {
		year = stoi(date.substr(0, 4));
		month = stoi(date.substr(5, 7));
		day = stoi(date.substr(7, 9));
	}
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	void show() {
		cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
	}
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
};