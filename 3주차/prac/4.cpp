/*
�ǽ�����04

�а�: ��ǻ�Ͱ��а�
�й�: 2016112127
�̸�: ������
*/

#include "4.h"

int main() {
	CoffeeMachine java(5, 10, 3);//Ŀ�Ƿ�: 5, ����:10, ����:6 ���� �ʱ�ȭ
	java.drinkEspresso();//Ŀ�� 1, �� 1 �Һ�
	java.show();//���� Ŀ�� �ӽ��� ���� ���
	java.drinkAmericano();//Ŀ�� 1, �� 2 �Һ�
	java.show();//���� Ŀ�� �ӽ��� ���� ���
	java.drinkSugarCoffee();//Ŀ��1, ��2, ���� 1 �Һ�
	java.show();//���� Ŀ�� �ӽ��� ���� ���
	java.fill();//Ŀ�� 10, �� 10, ���� 10���� ä���
	java.show();//���� Ŀ�� �ӽ��� ���� ���
}