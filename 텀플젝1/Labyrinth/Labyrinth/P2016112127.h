#pragma once
#include "Player.h"

class P2016112127 : public Player
{
public:
	P2016112127();
	void gameStart(Point player, int height, int width);
	Action nextMove();
	void ableToMove(Point point, Point prevPoint);
	void notAbleToMove(Point point);

private:
	Point point;
};