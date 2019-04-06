#include "7.h"

int main() {
	Circle c[3];
	int r_buf;
	int count = 0;//면적이 100보다 큰 원의 개수
	cout << "원의 반지름을 3번 입력하라." << endl;
	for (int i = 0; i < 3; i++) {
		cout << ">> ";
		cin >> r_buf;
		c[i].setRadius(r_buf);//반지름 입력
		if (c[i].getArea() > 100)//원의 면적이 100보다 크면
			count++;
	}
	cout << "면적이 100보다 큰 원의 개수는 " << count << "개 이다." << endl;
	return 0;
}