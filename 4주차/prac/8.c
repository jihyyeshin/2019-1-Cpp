//#include <stdio.h>
//struct student{
//	int num;		// �й��� ������ ���
//	char name[20];	// �̸��� ������ ���
//	int score[5];	// 5������ ������ ������ ���
//	double avg;	// ����� ������ ���
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
//	int buf[5] = { 82, 93, 74, 90, 65 };//�ӽ�����
//	//����
//	s.num = 315;
//	strcpy(s.name, "ȫ�浿");
//	for (int i = 0; i < sizeof(s.score) / sizeof(int); i++) {
//		s.score[i] = buf[i];
//	}
//	s.avg=average(s.score);
//	printf("�й� : %d\n", s.num);
//	printf("�̸� : %s\n", s.name);
//	printf("���� : ");
//	for (int i = 0; i < sizeof(s.score) / sizeof(int); i++) {
//		printf("%d ", s.score[i]);
//	}
//	printf("\n��� : %.1lf\n", s.avg);
//
//}