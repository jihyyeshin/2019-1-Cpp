#pragma once
#include "Player.h"
using namespace std;

enum Way
{
	UP, DOWN, RIGHT, LEFT
};

class P2016112127 : public Player
{
public:
	P2016112127();
	void gameStart(Point player, int height, int width);
	Action nextMove();//enum: MOVE_LEFT, MOVE_RIGHT, MOVE_UP, MOVE_DOWN
	void ableToMove(Point point, Point prevPoint);
	void notAbleToMove(Point point);

private:
	Way togo;//다음으로 갈 방향을 담고 있다.
};