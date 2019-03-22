/*
실습문제04

학과: 컴퓨터공학과
학번: 2016112127
이름: 신지혜
*/

#include "4.h"

int main() {
	CoffeeMachine java(5, 10, 3);//커피량: 5, 물량:10, 설탕:6 으로 초기화
	java.drinkEspresso();//커피 1, 물 1 소비
	java.show();//현재 커피 머신의 상태 출력
	java.drinkAmericano();//커피 1, 물 2 소비
	java.show();//현재 커피 머신의 상태 출력
	java.drinkSugarCoffee();//커피1, 물2, 설탕 1 소비
	java.show();//현재 커피 머신의 상태 출력
	java.fill();//커피 10, 물 10, 설탕 10으로 채우기
	java.show();//현재 커피 머신의 상태 출력
}