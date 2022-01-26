#include <iostream>

// OOP : ��ü���� ���α׷���(Object Oriented Programming)
//	1.	Ÿ���� ���� �����ض�!
//		Ÿ�Կ��� "Rect","Person"���� �͸� �ִ� ���� �ƴϴ�.
//		"�����迭"�̶�� Ÿ���� ������ ����
//

class Vector {
	int* buff;
	int size;
public:
	Vector(int sz) : size(sz)
	{
		buff = new int[size];
	}
	//	�����ڿ��� �ڿ��Ҵ��� ��� �Ҹ��ڸ� ���� �ڿ� �����ؾ� �մϴ�.
	//	=> �Ҹ��ڰ� �ʿ��ϴ�(�����Ҵ� ���� �޸𸮰� �Ҵ�Ȱ��)
	~Vector() {
		delete[] buff;
	}
	void setAt(int idx, int value) {
		buff[idx] = value;
	}
	int getAt(int idx) {
		return buff[idx];
	}
};
int main() {
	Vector v(5);		// buff�� size�� �ı��ȴ�. �׷��� Vector���� �Ҵ��� �޸𸮴�???

	v.setAt(0, 10);		// 0��°�� 10�� �����ش޶�
	int n = v.getAt(0);	// 0��° ���� �����ʹ޶�
	std::cout << n << std::endl;
}