#include "Common.h"
#include "Point.h"
#include "M2012345678.h"
M2012345678::M2012345678()
{
}
Point M2012345678::input()
{
	//������ġ�� Ȯ���ϱ� ����
	//p�� �����Ͽ� ��ȯ
	Point p(rand()%BOARD_SIZE, rand()%BOARD_SIZE);
	return p;
}

void M2012345678::checkMineInfo(Point p)
{

}
void M2012345678::checkBoardInfo(Point p, int value)
{

}