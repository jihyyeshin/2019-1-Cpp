#pragma once
#include "Player.h"
#include "Maze.h"
#include <iostream>
#include <stack>
using namespace std;
/*
갈 수 있는 "좌표"를 담을 스택이 필요하다. ableToMove()에서 현 위치에서 갈 수 있는 방향의 좌표를 모두 넣은 후,
nextMove에서 pop한 위치와, 현 위치를 비교하여  left, right, ...을 파악해서 nextMove()를 return

ableToMove(nextPoint)를 가져왔을 때, 그 좌표에서 움직일 수 있는 부분이 있으면, 스택에 넣은 후 true를 하고, 세면 다 움직일 수 없으면 false
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
	//Action togo;//다음으로 갈 방향을 담고있다.
};