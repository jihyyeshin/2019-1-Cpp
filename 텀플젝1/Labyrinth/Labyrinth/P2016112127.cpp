#include "P2016112127.h"
#include "GameManager.h"
/*
GameManager에 maze가 private으로 정의되어있기 때문에, 맵에 대해 알 수 있는 방법이 없다.
여기서 maze의 ableToMove를 사용해야만 그 좌표의 상태를 알 수 있고, 이 함수는 GameManager에서 매 반복문에 한 번씩만 쓰이기 때문에,
(이 때, 한 번씩 턴이 들어가므로 미리 가볼 수 있는 방법이 없다)
각 방향으로 직접 가보는 수 밖에 없다고 생각했다.

따라서, 시계방향(오른쪽)으로 돌아가며 접근하고 해당 방향으로 갈 수 없을 때 (canMove가 false일 때)	반시계 방향(왼쪽)으로 ableToMove를 확인한다.
*/
P2016112127::P2016112127()
{
}

/*
맨 처음에 갈 방향을 지정해준다.
user는 무조건 한쪽 끝에서 시작하기 때문에, 4가지의 경우 중 하나로 들어가게 된다.
exception이 생기지 않도록 오른쪽 끝에서 시작하는 경우를 else로 둔다.

(아래 방향이 +x축, 오른쪽 방향이 +y축임을 잊지 말것!)
*/
void P2016112127::gameStart(Point player, int height, int width)
{
	if (player.getX() == 0)//천장에서 시작
		togo = DOWN;//처음에 갈 방향은 "아래"
	else if (player.getX() == height - 1)//바닥에서 시작
		togo = UP;//처음에 갈 방향은 "위"
	else if (player.getY() == 0)//왼쪽 끝에서 시작
		togo = RIGHT;//처음에 갈 방향은 "오른쪽"
	else //if (player.getY() == width - 1), 오른쪽 끝에서 시작
		togo = LEFT;//처음에 갈 방향은 "왼쪽"
}
/*
가고자 하는 방향에 따라 Action을 리턴한다.
GameManager에서 리턴한 값을 바탕으로 좌표를 이동시키고, ableToMove인지 확인하게 된다.
*/
Action P2016112127::nextMove()
{
	switch (togo)
	{
	case UP:
		return MOVE_UP;
	case DOWN:
		return MOVE_DOWN;
	case RIGHT:
		return MOVE_RIGHT;
	case LEFT:
		return MOVE_LEFT;
	}
}

/*
nextMove에서 정한 좌표가 maze.ableToMove에서 이동 가능함을 확인받은 후
시계 방향에 따라 그 다음의 이동 위치를 정한다.
*/
void P2016112127::ableToMove(Point point, Point prevPoint)
{
	if (togo == UP)
		togo = RIGHT;
	else if (togo == DOWN)
		togo = LEFT;
	else if (togo == RIGHT)
		togo = DOWN;
	else if (togo == LEFT)
		togo = UP;
}
/*
이동이 불가능할 경우 반시계 방향에 따라 그 다음의 이동 위치를 정한다.
*/
void P2016112127::notAbleToMove(Point point)
{
	if (togo == UP)
		togo = LEFT;
	else if (togo == DOWN)
		togo = RIGHT;
	else if (togo == RIGHT)
		togo = UP;
	else if (togo == LEFT)
		togo = DOWN;
}
