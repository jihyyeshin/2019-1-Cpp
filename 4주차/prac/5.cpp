#include <iostream>
using namespace std;

class Temperature {
public:
	double range(double *max, double *min) {
		return *max - *min;
	}
};


int main() {
	double max, min;
	Temperature t;
	cout <<"�ְ��°� ��������� �Է��ϼ��� : ";
	cin >>  max >> min;
	cout << "�ϱ����� " << t.range(&max, &min)<<" �� �Դϴ�.\n";
}