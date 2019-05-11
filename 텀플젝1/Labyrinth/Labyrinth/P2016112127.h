#pragma once
#include "Player.h"
#include "Maze.h"
#include <iostream>
#include <stack>
using namespace std;
/*
�� �� �ִ� "��ǥ"�� ���� ������ �ʿ��ϴ�. ableToMove()���� �� ��ġ���� �� �� �ִ� ������ ��ǥ�� ��� ���� ��,
nextMove���� pop�� ��ġ��, �� ��ġ�� ���Ͽ�  left, right, ...�� �ľ��ؼ� nextMove()�� return

ableToMove(nextPoint)�� �������� ��, �� ��ǥ���� ������ �� �ִ� �κ��� ������, ���ÿ� ���� �� true�� �ϰ�, ���� �� ������ �� ������ false
*/


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
	bool tf = true;
	Way togo;
	//Action togo;//�������� �� ������ ����ִ�.
};