#include "9.h"

int Board::index = 0;
string Board::newBoard[1000];

int main() {
	//Board myBoard;//객체 생성은 컴파일 오류!
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}