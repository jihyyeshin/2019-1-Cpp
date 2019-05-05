#include "P2016112127.h"

P2016112127::P2016112127()
{
}

void P2016112127::gameStart(Point player, int height, int width)
{
	//std::cout << "시작 위치" << player << ' ' << height << ' ' << width << std::endl;
}

Action P2016112127::nextMove()
{
	// 랜덤하게 이동
	switch (rand()%4)
	{
	case 0:
		return Action::MOVE_DOWN;
	case 1:
		return Action::MOVE_UP;
	case 2:
		return Action::MOVE_LEFT;
	case 3:
		return Action::MOVE_RIGHT;
	}
}

void P2016112127::ableToMove(Point point, Point prevPoint)
{
	//std::cout << point << "가능" << prevPoint <<std::endl;
}

void P2016112127::notAbleToMove(Point point)
{
	//std::cout << point << "불가" << std::endl;
}
