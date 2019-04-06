#include "14.h"

int main() {
	GamblingGame gg;
	srand((unsigned int)time(0));//랜덤정수생성기
	while (gg.gameStart());
}