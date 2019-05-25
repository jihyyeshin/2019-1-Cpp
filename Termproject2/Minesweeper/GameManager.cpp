#include "Common.h"
#include "GameManager.h"
GameManager::GameManager()
{
	//���尡 �����ɶ� ���ھ� �ʱ�ȭ
	player1Score = 0;
	player2Score = 0;
}
void GameManager::play()
{
	Point p;

	//������ �÷��̾ �������� ����
	int turn = rand()%2;

	if(turn%2)
		cout << "Player1 Start" << endl;
	else
		cout << "Player2 Start" << endl;
	
	//�� ī�带 ������ Ƚ�� i
	//turn�� 0�� 1�� �ٲ㰡�� �÷����� ������ ������
	for(int i = 0 ; ; turn = (turn+1)%2, i++)
	{
		//�ش� ���� �������� �Է��� ����
		if(turn%2)
		{
			p = player1.input();
		}
		else
		{
			p = player2.input();
		}

		//�ش� ��ǥ�� ���� Ȯ����
		int value = game.getBoardInfo(p);

		//������ ���
		if(value == -1)
		{
			//�̹� Ȯ���� ���ڰ� �ƴ� ���
			if(game.checkOpend(p) == false)
			{
				//�ش� ���ڴ� �̹� ã�Ҵٰ� ǥ��
				game.setOpend(p);

				//�ش� �÷��̾��� ������ �ø�
				if(turn%2)
				{
					player1Score++;
					cout << "Player1 Find mine) " << p << endl;
				}
				else
				{
					player2Score++;
					cout << "Player2 Find mine) " << p << endl;
				}
			}

			//��ź�� ��� ã�� ��� ���ھ� ������ ����ϰ� ������
			if(player1Score+player2Score >= MINE_COUNT)
			{
				cout << "Player1 total score : " <<  player1Score << endl;
				cout << "Player2 total score : " <<  player2Score << endl;
				cout << "total turn count : " <<  i << endl;
				break;
			}

			//��ź�� ��ġ�� �� �÷��̾�� �˸�
			player1.checkMineInfo(p);
			player2.checkMineInfo(p);

			//�ش� ������ ���� 1ȸ �� �ϱ����� turn�� �ٲ�
			turn++;
		}
		//���ڰ� �ƴ� ���
		else
		{
			//�̹� ���� ��ǥ�� � ���� �־����� �˸�
			player1.checkBoardInfo(p, value);
			player2.checkBoardInfo(p, value);
		}
	}
}