#include "9.h"

int main(){
	cout << "�̸��� ��ȭ ��ȣ�� �Է����ּ���" << endl;
	Person p[3];
	int i = 0;
	string n_buf, t_buf;
	for (i = 0; i < 3; i++) {
		cout << "��� " << i+1 << ">> ";
		cin >> n_buf >> t_buf;
		p[i].set(n_buf, t_buf);
	}
	cout << "��� ����� �̸��� ";
	for (i = 0; i < 3; i++)
		cout << p[i].getName() <<" ";
	cout << "\n��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> n_buf;
	for (i = 0; i < 3; i++) {
		if (n_buf.compare(p[i].getName()) == 0)
			cout << "��ȭ ��ȣ�� " << p[i].getTel() << endl;
	}
}