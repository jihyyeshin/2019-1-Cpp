#ifndef PLAYER_H
#define PLAYER_H

#include "Point.h"

class Player
{
public :
	Player()
	{
	}
	//Ȯ���غ��� ���� ��ġ�� ��ȯ
	virtual Point input()=0;
	//Ȯ���� ��ġ�� ���ڰ� ���� ��� ȣ��� �޼ҵ�(���� ��ġ p)
	virtual void checkMineInfo(Point p)=0;
	//Ȯ���� ��ġ�� ���ڰ� ���� ��� ȣ��� �޼ҵ�
	//(���� ��ġ p, ���� 8���⿡ �����ϴ� ������ ��)
	virtual void checkBoardInfo(Point p, int value)=0;
};

#endif