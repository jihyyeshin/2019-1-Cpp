class BaseMemory {
	char *mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	char getMemArr(int index) { return mem[index]; }
	void setMemArr(int index, char input) { mem[index] = input; }
};

class ROM :public BaseMemory {
public:
	ROM(int KB, char *array, int size) : BaseMemory(size)
	{//burn작업이 일어나야 한다.
		for (int i = 0; i < size; i++)
			setMemArr(i, array[i]);
	}
	char read(int index) { return getMemArr(index); }
};

class RAM : public BaseMemory {
public:
	RAM(int MB) :BaseMemory(MB) { ; }
	void write(int index, char input) {
		setMemArr(index, input);
	}
	char read(int index) { return getMemArr(index); }
};