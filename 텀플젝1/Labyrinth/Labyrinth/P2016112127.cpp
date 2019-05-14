#include "P2016112127.h"
#include "GameManager.h"
/*
GameManager�� maze�� private���� ���ǵǾ��ֱ� ������, �ʿ� ���� �� �� �ִ� ����� ����.
���⼭ maze�� ableToMove�� ����ؾ߸� �� ��ǥ�� ���¸� �� �� �ְ�, �� �Լ��� GameManager���� �� �ݺ����� �� ������ ���̱� ������,
(�� ��, �� ���� ���� ���Ƿ� �̸� ���� �� �ִ� ����� ����)
�� �������� ���� ������ �� �ۿ� ���ٰ� �����ߴ�.

����, �ð����(������)���� ���ư��� �����ϰ� �ش� �������� �� �� ���� �� (canMove�� false�� ��)	�ݽð� ����(����)���� ableToMove�� Ȯ���Ѵ�.
*/
P2016112127::P2016112127()
{
}

/*
�� ó���� �� ������ �������ش�.
user�� ������ ���� ������ �����ϱ� ������, 4������ ��� �� �ϳ��� ���� �ȴ�.
exception�� ������ �ʵ��� ������ ������ �����ϴ� ��츦 else�� �д�.

(�Ʒ� ������ +x��, ������ ������ +y������ ���� ����!)
*/
void P2016112127::gameStart(Point player, int height, int width)
{
	if (player.getX() == 0)//õ�忡�� ����
		togo = DOWN;//ó���� �� ������ "�Ʒ�"
	else if (player.getX() == height - 1)//�ٴڿ��� ����
		togo = UP;//ó���� �� ������ "��"
	else if (player.getY() == 0)//���� ������ ����
		togo = RIGHT;//ó���� �� ������ "������"
	else //if (player.getY() == width - 1), ������ ������ ����
		togo = LEFT;//ó���� �� ������ "����"
}
/*
������ �ϴ� ���⿡ ���� Action�� �����Ѵ�.
GameManager���� ������ ���� �������� ��ǥ�� �̵���Ű��, ableToMove���� Ȯ���ϰ� �ȴ�.
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
nextMove���� ���� ��ǥ�� maze.ableToMove���� �̵� �������� Ȯ�ι��� ��
�ð� ���⿡ ���� �� ������ �̵� ��ġ�� ���Ѵ�.
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
�̵��� �Ұ����� ��� �ݽð� ���⿡ ���� �� ������ �̵� ��ġ�� ���Ѵ�.
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
