#pragma once

class Cal {//�߻� Ŭ����
protected:
	int a;
	int b;
public:
	void setValue(int x, int y);
	virtual int calculate() = 0;
};

class Add :public Cal {//����
public:
	int calculate();
};
class Sub :public Cal {//����
public:
	int calculate();
};
class Mal :public Cal {//����
public:
	int calculate();
};
class Div :public Cal {//������
public:
	int calculate();
};