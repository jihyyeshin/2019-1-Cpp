#pragma once
#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int&retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int *conArr = new int[size * 2];
	int i;
	for (i = 0; i < size; i++)
		conArr[i] = s1[i];
	for (i = 0; i < size; i++)
		conArr[i + size] = s2[i];

	return conArr;
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int &retSize) {
	int* reArr = new int[size * 2];

	int k = 0;
	for (int i = 0; i<size; i++) {
		int j;
		for (j = 0; j<size; j++) {
			if (s1[i] == s2[j])
				break;
		}
		if (j == size) { // not found
			reArr[k] = s1[i];
			k++;
		}
	}

	retSize = k;
	if (k == 0)
		return NULL;

	int* reArr2 = new int[retSize];
	if (!reArr2) {
		retSize = 0;
		return NULL;
	}

	for (int i = 0; i<retSize; i++) reArr2[i] = reArr[i];

	delete[] reArr;
	return reArr2;
}
