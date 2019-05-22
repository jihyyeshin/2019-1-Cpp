#include<string>
#include<iostream>
using namespace std;
class Print {
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Print(string model, string manufacturer, int avCount) {
		this->model = model;
		this->manufacturer = manufacturer;
		availableCount = avCount;
	}
	bool print(int pages) {
		if (availableCount - pages >= 0) {
			availableCount -= pages;
			cout << "프린트 하겠습니다." << endl;
			return true;
		}
		else {
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
	}
	string getMod() { return model; }
	string getMan() { return manufacturer; }
	int getAvCount() { return availableCount; }
};

class InkJet : public Print {
	int availableInk;
public:
	InkJet(string model, string manufacturer, int avCount, int avInk)
		: Print(model, manufacturer, avCount)
	{
		availableInk = avInk;
	}
	int printInkJet(int pages) {
		if (print(pages)) {
			if (availableInk - pages >= 0) {
				availableInk -= pages;
				return availableInk;
			}
		}
		else return availableInk;
	}
	void show() {
		cout << getMod() << ", " << getMan() << ", 남은 종이 " << getAvCount()
			<< "장, " << "남은 잉크 " << availableInk << endl;
	}
};

class Laser :public Print {
	int availableToner;
public:
	Laser(string model, string manufacturer, int avCount, int avToner)
		: Print(model, manufacturer, avCount)
	{
		availableToner = avToner;
	}
	int printLaser(int pages) {
		if (print(pages)) {
			if (availableToner - pages >= 0) {
				availableToner -= pages;
				return availableToner;
			}
		}
		else return availableToner;
	}
	void show() {
		cout << getMod() << ", " << getMan() << ", 남은 종이 " << getAvCount()
			<< "장, " << "남은 토너 " << availableToner << endl;
	}
};