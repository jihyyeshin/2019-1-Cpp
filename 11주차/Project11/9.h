#include<iostream>
#include<string>
using namespace std;

class Console {
public:
	int menu() {
		int num;
		cout << "\n����:1, ���:2, ����:3, ������:4 >>";
		cin >> num;
		return num;
	}
	int time_menu() {
		int num;
		cout << "07��:1, 12��:2, 17��:3>> ";
		cin >> num;
		return num;
	}
};

class Seat {
	string name;
	int number;
public:
	Seat() { this->name = "- - -"; this->number = -1; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class Schedule {
	Seat *seat;
public:
	Schedule() {
		seat = new Seat[8];
	}
	void show(int num) {
		switch (num) {
		case 1:cout << "7��:"; break;
		case 2:cout << "12��:"; break;
		case 3:cout << "17��:"; break;
		default:
			cout << "�ٽ��Է�" << endl;
		}
		for (int i = 0; i < 8; i++)
			cout << "\t" << seat[i].getName();
		cout << endl;
	}
	void setN(int num, string name) { seat[num - 1].setName(name); }
	string getN(int num) { return seat[num - 1].getName(); }
};

class AirlineBook {
	Schedule *s;
public:
	AirlineBook() {
		s = new Schedule[3];
	}
	void program() {
		bool exit = true;
		int num;
		Console c;
		int seat_num;
		string name;
		while (exit) {
			num = c.menu();
			if (num == 1) {
				num = c.time_menu();
				if (num >= 1 && num <= 3) {
					s[num - 1].show(num);
					cout << "�¼� ��ȣ >>";
					cin >> seat_num;
					cin.ignore(1);
					cout << "�̸� �Է� >>"; getline(cin, name);
					s[num - 1].setN(seat_num, name);
				}
				else cout << "���� �߸� �Է�" << endl;
			}
			else if (num == 2) {
				num = c.time_menu();
				if (num >= 1 && num <= 3) {
					s[num - 1].show(num);
					cout << "�¼� ��ȣ >>";
					cin >> seat_num;
					cin.ignore(1);
					cout << "�̸� �Է� >>"; getline(cin, name);
					if (name != s[num - 1].getN(seat_num))
						cout << "�ش� �¼��� ����Ǿ� �ִ� �̸��� ��ġ���� �ʽ��ϴ�." << endl;
					else s[num - 1].setN(seat_num, "---");
				}
				else cout << "���ڸ� �߸� �Է��ϼ̽��ϴ�." << endl;
			}
			else if (num == 3) {
				s[0].show(1);
				s[1].show(2);
				s[2].show(3);
			}
			else if (num == 4) {
				cout << "���� �ý����� �����մϴ�." << endl;
				exit = false;
			}
			else
				cout << "���ڸ� �߸� �Է��ϼ̽��ϴ�." << endl;
		}
	}
};