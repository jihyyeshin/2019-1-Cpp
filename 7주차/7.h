#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32627);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max) {
	int range = max - min;
	int n = rand();
	n = (n % (range + 1)) + min;
	return n;
}

char Random::nextAlphabet() {
	int n = Random::nextInt() % 52;
	if (n>25) return 'A' + (n - 26);
	else return 'a' + n;
}

double Random::nextDouble() {
	double d = (double)Random::nextInt();
	d = d / (double)RAND_MAX;
	return d;
}

