using namespace std;
#include <iostream>
class SortedArray {
	int size;
	int *p;
	void sort();
public:
	SortedArray() {
		size = 0;
		p = NULL;
	}
	SortedArray(SortedArray& src) {
		size = src.size;
		p = new int[size];
		for (int i = 0; i < size; i++)
			*(p + i) = *(src.p + i);

		sort();
	}
	SortedArray(int p[], int size) {
		this->size = size;
		this->p = new int[size];
		for (int i = 0; i < size; i++)
			*(this->p + i) = *(p + i);
		sort();
	}
	~SortedArray() { delete[] p; }
	SortedArray operator+(SortedArray& op2);
	SortedArray& operator=(const SortedArray& op2);
	void show() {
		cout << "배열 출력 : ";
		for (int i = 0; i < size; i++)
			cout << *(p + i) << ' ';
		cout << endl;
	}
};

SortedArray SortedArray::operator+(SortedArray& op2) {
	SortedArray tmp;
	tmp.size = size + op2.size;
	tmp.p = new int[tmp.size];
	for (int i = 0; i < tmp.size; i++)
	{
		if (i < size)
			*(tmp.p + i) = *(p + i);
		else
			*(tmp.p + i) = *(op2.p + i - size);
	}
	return tmp;
}
SortedArray& SortedArray::operator=(const SortedArray& op2) {
	delete[]p;
	size = op2.size;
	p = new int[size];
	for (int i = 0; i < size; i++)
		*(p + i) = *(op2.p + i);
	sort();
	return *this;
}
void SortedArray::sort() {
	for (int i = 0; i < size; i++)
	{
		int tmp;
		if (*(p + i) > *(p + i + 1))
		{
			if (i + 1 == size)
				break;

			tmp = *(p + i);
			*(p + i) = *(p + i + 1);
			*(p + i + 1) = tmp;
		}
	}
}