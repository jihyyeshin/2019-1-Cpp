#include "9.h"

int main(){
	cout << "이름과 전화 번호를 입력해주세요" << endl;
	Person p[3];
	int i = 0;
	string n_buf, t_buf;
	for (i = 0; i < 3; i++) {
		cout << "사람 " << i+1 << ">> ";
		cin >> n_buf >> t_buf;
		p[i].set(n_buf, t_buf);
	}
	cout << "모든 사람의 이름은 ";
	for (i = 0; i < 3; i++)
		cout << p[i].getName() <<" ";
	cout << "\n전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> n_buf;
	for (i = 0; i < 3; i++) {
		if (n_buf.compare(p[i].getName()) == 0)
			cout << "전화 번호는 " << p[i].getTel() << endl;
	}
}