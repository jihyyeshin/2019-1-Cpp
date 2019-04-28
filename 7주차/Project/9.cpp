#include <iostream>
#include <string>
using namespace std;

#include "9.h"

int Board::size = 0; 
string Board::text[100];

void Board::add(string t) {
	if (size > 99)
		return; //끝

	text[size] = t;
	size++;
}

void Board::print() {
	cout << "************* 게시판입니다. *************" << endl;
	for (int i = 0; i < size; i++) {
		cout << i << ": " << text[i] << endl;
	}
	cout << endl;
}

