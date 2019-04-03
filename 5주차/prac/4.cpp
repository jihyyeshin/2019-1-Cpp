#include "4.h"
int main() {
	Sample s(10); //10개 장수 배열을 가진 Sample 객체 생성
	s.read(); //키보드에서 정수 배열 읽기
	s.write(); //정수 배열 출력
	cout << "\n가장 큰 수는 " << s.big() << endl; //가장 큰 수 출력
}
