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
	cout <<"최고기온과 최저기온을 입력하세요 : ";
	cin >>  max >> min;
	cout << "일교차는 " << t.range(&max, &min)<<" 도 입니다.\n";
}