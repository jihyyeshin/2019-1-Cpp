#pragma once

class Cal {//Ãß»ó Å¬·¡½º
protected:
	int a;
	int b;
public:
	void setValue(int x, int y);
	virtual int calculate() = 0;
};

class Add :public Cal {//µ¡¼À
public:
	int calculate();
};
class Sub :public Cal {//»¬¼À
public:
	int calculate();
};
class Mal :public Cal {//°ö¼À
public:
	int calculate();
};
class Div :public Cal {//³ª´°¼À
public:
	int calculate();
};