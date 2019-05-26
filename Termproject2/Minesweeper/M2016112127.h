#ifndef M2016112127_H
#define M2016112127_H
#include "Common.h"
#include "Player.h"
#include <vector>

class M2016112127 : public Player
{
	int myX;//현 위치 x
	int myY;//현 위치 y
	vector<Point> dont;//이미 간 곳 + 지뢰 없는게 확실한 곳
	bool isVisited;//갔던 곳인가?
	bool allLandMine;//value==8일 때
	int all;//value값에 따라 확인
	const int xDir[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };//현 위치에서 갈 수 있는 여덟 개의 방향
	const int yDir[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
public:
	M2016112127();
	Point input();
	void checkMineInfo(Point p);
	void checkBoardInfo(Point p, int value);
};
#endif