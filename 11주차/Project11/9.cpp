#include<iostream>
#include"9.h"
using namespace std;

int main() {
	cout << "***** 한성항공에 오신것을 환영합니다. *****" << endl;
	AirlineBook *Air = new AirlineBook();
	Air->program();
}