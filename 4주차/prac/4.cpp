//#include <iostream>
//
//class Change {
//public:
//	void exchange(double *a, double *b) {
//		double buf = *a;
//		*a = *b;
//		*b = buf;
//	}
//
//void line_up(double *max, double *mid, double *min) {
//	if (*max < *min) {
//		exchange(max, min);
//		if (*mid < *min) {
//			exchange(mid, min);
//		}
//		if (*mid > *max) {
//			exchange(mid, max);
//		}
//	}
//}
//
//
//int main() {
//	double max, mid, min;
//	Change c;
//	printf("���� �� ���� �Է��ϼ��� : ");
//	scanf_s("%lf%lf%lf", &max, &mid, &min);
//
//	c.line_up(&max, &mid, &min);  // �� ������ ���� ���Ͽ� �ٲ��ִ� �Լ� ȣ��
//	printf("ū ������ ���ʷ� ����ϸ� : %lf, %lf, %lf\n", max, mid, min);
//	return 0;
//}
