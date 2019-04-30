#include <iostream>
#include <string>
using namespace std;

class Board {
	static int index;
	static string newBoard[1000];

public:
	static void add(string str);
	static void print();
};

void Board::add(string str) {
	newBoard[index++] = str;
}

void Board::print() {
	cout << "********** 게시판입니다. **********" << endl;
	for (int i = 0; i < index; i++)
		cout << i << ": " << newBoard[i] << endl;
	cout << endl;
}
