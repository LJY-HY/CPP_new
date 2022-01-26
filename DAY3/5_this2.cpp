
#include <iostream>

class Point {
	int x;
	int y;
public:
	void set(int a, int b) {	// void set(Point* this, int a, int b)
		x = a;
		y = b;
		// 멤버 함수 안에서 this 키워드를 사용할 수 있습니다.
		// 현재 함수를 호출할 때 사용한 객체의 주소입니다.
		std::cout << this << std::endl;
	}
};

int main() {
	Point p1;
	Point p2;
	p1.set(10, 20);
	p2.set(10, 20);
	std::cout << &p1 << std::endl;
	std::cout << &p2 << std::endl;
	

}