#include <stdio.h>

double mul(double num1, double num2) {
	return num1 * num2;
}
int main() {
	double num1, num2;
	printf("���� �� ���� �Է��ϼ���.\n");
	scanf_s("%lf", &num1);
	scanf_s("%lf", &num2);
	printf("%.1lf\n", mul(num1,num2));
}