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

class MyQueue :public BaseArray {
	int first;
	int last;
public:
	MyQueue(int capacity) { first = 0; last = 0; }
	void enqueue(int member) {
		put(last, member);
		last++;
	}
	int dequeue() {
		return get(first++);
	}
	int capacity() { return getCapacity(); }
	int length() { return last - first; }
};