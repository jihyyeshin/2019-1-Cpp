//#include <stdio.h>
//struct student{
//	int num;		// 학번을 저장할 멤버
//	char name[20];	// 이름을 저장할 멤버
//	int score[5];	// 5과목의 점수를 저장할 멤버
//	double avg;	// 평균을 저장할 멤버
//};
//
//double average(int *score) {
//	double avg=0;
//	for (int i = 0; i < 5; i++) {
//		avg += score[i];
//	}
//	avg /= 5;
//	return avg;
//}
//
//int main() {
//	struct student s;
//	int buf[5] = { 82, 93, 74, 90, 65 };//임시저장
//	//저장
//	s.num = 315;
//	strcpy(s.name, "홍길동");
//	for (int i = 0; i < sizeof(s.score) / sizeof(int); i++) {
//		s.score[i] = buf[i];
//	}
//	s.avg=average(s.score);
//	printf("학번 : %d\n", s.num);
//	printf("이름 : %s\n", s.name);
//	printf("점수 : ");
//	for (int i = 0; i < sizeof(s.score) / sizeof(int); i++) {
//		printf("%d ", s.score[i]);
//	}
//	printf("\n평균 : %.1lf\n", s.avg);
//
//}