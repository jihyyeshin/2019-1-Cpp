#pragma once
typedef struct Debug {
	string tag;
	string deInfo;
};

class Trace {
	static Debug debug[101];//디버깅 정보는 100개로 제한
	static int index;
public:
	static void put(string tag, string deInfo) {
		Debug de;
		de.deInfo = deInfo;
		de.tag = tag;
		debug[index++] = de;
	}
	static void print(string tag) {
		cout << "----- " << tag << "태그의 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < index; i++) {
			if (debug[i].tag == tag) {
				cout << debug[i].tag << ":" << debug[i].deInfo << endl;
			}
		}
	}
	//overloading
	static void print() {
		cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < index; i++) {
			cout << debug[i].tag << ":" << debug[i].deInfo << endl;
		}
	}
};
