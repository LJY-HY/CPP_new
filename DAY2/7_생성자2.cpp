#include <iostream>

class Point {
	int x;
	int y;
public:
	//	사용자가 생성자를 하나도 만들지 않으면 컴파일러가 인자 없는 생성자를 제공
	//	=>디폴트 생성자라고 한다.
	//	컴파일러가 제공하는 생성자는 아무 일도 하지 않습니다.		(사실 만들어지지도 않음)
	//	가상함수가 있는 경우 "가상함수 테이블 초기화"를 합니다.
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int,int)" << std::endl; }
};

int main() {
	//	모든 객체는 생성되면 반드시 생성자가 호출되어야 한다.
	//Point p1;							//	1번 생성자 호출
	//Point p2(1, 2);					//	2번 생성자 호출

	Point arr1[5];						//	1번 생성자 5번 호출
	Point arr2[5] = { {1,2},{0,0} };	//	1번 생성자 3번 / 2번 생성자 2번
	Point* p;							//	객체 생성 아님... 생성자 호출 안됨

	p = static_cast<Point*>(malloc(sizeof(Point)));	//생성자 호출 안됨. Point 타입전달이 아닌 크기 8전달
	free(p);

	//	new는 생성자 호출됨
	p = new Point;						//	1번 생성자
	delete p;

	p = new Point(1, 2);				//	2번 생성자
	delete p;

	// C++11부터는 아래 표기도 가능
	Point p3(1, 1);			// C++98시절
	Point p5{ 1,1 };		//C++11 direct initialization
	Point p6 = { 1,1 };		//C++11 copy initialization
}