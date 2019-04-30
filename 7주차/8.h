#pragma once
typedef struct Debug {
	string tag;
	string deInfo;
};

class Trace {
	static Debug debug[101];//����� ������ 100���� ����
	static int index;
public:
	static void put(string tag, string deInfo) {
		Debug de;
		de.deInfo = deInfo;
		de.tag = tag;
		debug[index++] = de;
	}
	static void print(string tag) {
		cout << "----- " << tag << "�±��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < index; i++) {
			if (debug[i].tag == tag) {
				cout << debug[i].tag << ":" << debug[i].deInfo << endl;
			}
		}
	}
	//overloading
	static void print() {
		cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < index; i++) {
			cout << debug[i].tag << ":" << debug[i].deInfo << endl;
		}
	}
};
