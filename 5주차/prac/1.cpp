#include "1.h"

int main() {
	Color screenColor(255, 0, 0);//�������� screenColor ��ü ����
	Color *p;//Color Ÿ���� ������ ���� p ����
	p = &screenColor;//(1) p�� screenColor�� �ּҸ� �������� �ڵ� �ۼ�
	p->show();//(2) p�� show()�� �̿��Ͽ� screenColor �� ���
	Color colors[3];//(3) Color�� ������ �迭 colors ����. ���Ҵ� 3��
	p = colors;//(4) p�� colors �迭�� ����Ű���� �ڵ� �ۼ�
	
	//(5) p�� setColor()�� �̿��Ͽ� colors[0], colors[1], colors[2]�� 
	//���� ����, �ʷ�, �Ķ����� �������� �ڵ� �ۼ�
	p->setColor(255, 0, 0);
	(p + 1)->setColor(255, 0, 0);
	(p + 2)->setColor(0, 0, 255);
	//(6) p�� show()�� �̿��Ͽ� colors �迭�� ��� ��ü�� �� ���. for �� �̿�
	for (int i = 0; i < 3; i++)
		(p + i)->show();
}