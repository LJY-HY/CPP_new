#include <iostream>

// OOP : 객체지향 프로그래밍(Object Oriented Programming)
//	1.	타입을 먼저 설계해라!
//		타입에는 "Rect","Person"같은 것만 있는 것은 아니다.
//		"동적배열"이라는 타입을 설계해 보자
//

class Vector {
	int* buff;
	int size;
public:
	Vector(int sz) : size(sz)
	{
		buff = new int[size];
	}
	//	생성자에서 자원할당한 경우 소멸자를 만들어서 자원 해지해야 합니다.
	//	=> 소멸자가 필요하다(동적할당 등의 메모리가 할당된경우)
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
	Vector v(5);		// buff와 size는 파괴된다. 그러면 Vector에서 할당한 메모리는???

	v.setAt(0, 10);		// 0번째에 10을 보관해달라
	int n = v.getAt(0);	// 0번째 것을 가져와달라
	std::cout << n << std::endl;
}