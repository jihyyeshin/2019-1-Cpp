#include <stdio.h>

void swap(double *a, double *b) {
	double buf = *a;
	*a = *b;
	*b = buf;
}

int main() {
	double a = 1.3;
	double b = 1.7;
	printf("�ٲٱ� ���� a, b�� �� : %.1lf %.1lf\n", a, b);
	swap(&a, &b);
	printf("�ٲ� ���� a, b�� �� : %.1lf %.1lf\n", a, b);
}