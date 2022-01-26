#include <iostream>

template<typename T>
class Vector {
	T* buff;
	int size;
public:
	Vector(int sz) : size(sz)
	{
		buff = new T[size];
	}
	~Vector() {
		delete[] buff;
	}
	void setAt(int idx, T value) {
		buff[idx] = value;
	}
	T getAt(int idx) {
		return buff[idx];
	}
	void resize(int newsize) {
		if (newsize > size) {
			T* temp = new T[newsize];
			memcpy(temp, buff, sizeof(T) * size); 
			delete[] buff;
			buff = temp;
			size = newsize;
		}
	}
};
int main() {
	//Vector v(5);		//error. T타입이 결정될 수 없습니다.
	Vector<int> v(5);

	v.setAt(0, 10);

	v.resize(10);		 

	int n = v.getAt(0);
	std::cout << n << std::endl;
}