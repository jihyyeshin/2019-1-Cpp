#ifndef M2016112127_H
#define M2016112127_H
#include "Common.h"
#include "Player.h"
#include <vector>

class M2016112127 : public Player
{
	int myX;//�� ��ġ x
	int myY;//�� ��ġ y
	vector<Point> dont;//�̹� �� �� + ���� ���°� Ȯ���� ��
	bool isVisited;//���� ���ΰ�?
	bool allLandMine;//value==8�� ��
	int all;//value���� ���� Ȯ��
	const int xDir[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };//�� ��ġ���� �� �� �ִ� ���� ���� ����
	const int yDir[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
public:
	M2016112127();
	Point input();
	void checkMineInfo(Point p);
	void checkBoardInfo(Point p, int value);
};
#endif