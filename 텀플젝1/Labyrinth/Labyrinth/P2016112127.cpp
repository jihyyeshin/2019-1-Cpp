#include "P2016112127.h"

P2016112127::P2016112127()
{
}

void P2016112127::gameStart(Point player, int height, int width)
{
	//std::cout << "���� ��ġ" << player << ' ' << height << ' ' << width << std::endl;
}

Action P2016112127::nextMove()
{
	// �����ϰ� �̵�
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
	//std::cout << point << "����" << prevPoint <<std::endl;
}

void P2016112127::notAbleToMove(Point point)
{
	//std::cout << point << "�Ұ�" << std::endl;
}
