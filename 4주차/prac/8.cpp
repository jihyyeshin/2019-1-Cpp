#include <iostream>
using namespace std;
class Member{
public:
	typedef struct student {
		int num;		// 학번을 저장할 멤버
		char name[20];	// 이름을 저장할 멤버
		int score[5];	// 5과목의 점수를 저장할 멤버
		double avg;	// 평균을 저장할 멤버
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
	int buf[5] = { 82, 93, 74, 90, 65 };//임시저장
	//저장
	s.num = 315;
	strcpy_s(s.name, "홍길동");
	for (int i = 0; i < sizeof(s.score) / sizeof(int); i++) {
		s.score[i] = buf[i];
	}
	s.avg=m.average(s.score);
	cout <<"학번 : "<< s.num;
	cout<<"\n이름 : "<< s.name;
	cout<<"\n점수 : ";
	for (int i = 0; i < sizeof(s.score) / sizeof(int); i++) {
		cout<<s.score[i]<<" ";
	}
	cout<<"\n평균 : "<<s.avg<<endl;

}