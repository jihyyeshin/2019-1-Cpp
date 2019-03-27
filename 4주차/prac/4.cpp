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
//	printf("숫자 세 개를 입력하세요 : ");
//	scanf_s("%lf%lf%lf", &max, &mid, &min);
//
//	c.line_up(&max, &mid, &min);  // 세 변수의 값을 비교하여 바꿔주는 함수 호출
//	printf("큰 수부터 차례로 출력하면 : %lf, %lf, %lf\n", max, mid, min);
//	return 0;
//}
