#include <iostream>
using namespace std;
class Member{
public:
	typedef struct student {
		int num;		// �й��� ������ ���
		char name[20];	// �̸��� ������ ���
		int score[5];	// 5������ ������ ������ ���
		double avg;	// ����� ������ ���
	};

	double average(int *score) {
		double avg = 0;
		for (int i = 0; i < 5; i++) {
			avg += score[i];
		}
		avg /= 5;
		return avg;
	}
};


int main() {
	Member m;
	Member::student s;
	int buf[5] = { 82, 93, 74, 90, 65 };//�ӽ�����
	//����
	s.num = 315;
	strcpy_s(s.name, "ȫ�浿");
	for (int i = 0; i < sizeof(s.score) / sizeof(int); i++) {
		s.score[i] = buf[i];
	}
	s.avg=m.average(s.score);
	cout <<"�й� : "<< s.num;
	cout<<"\n�̸� : "<< s.name;
	cout<<"\n���� : ";
	for (int i = 0; i < sizeof(s.score) / sizeof(int); i++) {
		cout<<s.score[i]<<" ";
	}
	cout<<"\n��� : "<<s.avg<<endl;

}