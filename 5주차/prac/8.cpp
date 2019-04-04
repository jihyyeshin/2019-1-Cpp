/*7번과 동일한 헤더파일을 이용한다.*/
#include "7.h"

int main() {
	Circle *c;
	int r_buf;
	int c_num;//원의 개수
	int count = 0;//면적이 100보다 큰 원의 개수
	cout << "원의 개수 >> ";
	cin >> c_num;
	c = new Circle[c_num];
	for (int i = 0; i < c_num; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r_buf;
		c[i].setRadius(r_buf);//반지름 입력
		if (c[i].getArea() > 100)//원의 면적이 100보다 크면
			count++;
	}
	cout << "면적이 100보다 큰 원의 개수는 " << count << "개 이다." << endl;
	return 0;
}