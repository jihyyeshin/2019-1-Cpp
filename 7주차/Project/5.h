#pragma once
#include <iostream>
using namespace std;

class ArrayUtility {

public:
	static void intToDouble(int source[], double dest[], int size);
	static void doubleToInt(double source[], int dest[], int size);
};
void ArrayUtility::intToDouble(int source[], double dest[], int size) {
	for (int i = 0; i < size; i++) {
		dest[i] = (double)source[i];
	}
}

void ArrayUtility::doubleToInt(double source[], int dest[], int size) {
	for (int i = 0; i < size; i++) {
		dest[i] = (int)source[i];
	}
}