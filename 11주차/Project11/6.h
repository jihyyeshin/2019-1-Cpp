class BaseArray {
private:
	int capacity;
	int *mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[]mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack :public BaseArray {
	int index;
public:
	MyStack(int capacity) {
		index = 0;
	}
	void push(int n) {
		put(index, n);
		index++;
	}
	int pop() {
		return get(--index); //확인
	}
	int length() {
		return index;//확인
	}
	int capacity() {
		return getCapacity();
	}
};