#include "9.h"

int Board::index = 0;
string Board::newBoard[1000];

int main() {
	//Board myBoard;//��ü ������ ������ ����!
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}