#include <iostream>
//	2.	상태를 나타내는 데이터와 상태를 가지고 연산을 수행하는 함수를
//		묶어서 타입을 설계하자.
//		C++구조체는 함수를 넣을 수 있다.
struct Rect {
	int left;
	int top;
	int right;
	int bottom;

	int getArea() {
		return (right - left) * (top - bottom);
	}

	void draw() {
		std::cout << "draw rect" << std::endl;
	}
};


int main() {
	Rect rc = { 1,1,10,10 };
	int area = rc.getArea();		
	rc.draw();
}