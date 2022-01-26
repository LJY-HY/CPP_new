#include <iostream>

class Point {
	int x;
	int y;
public:
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int,int)" << std::endl; }
};
class Rect {
	//Point ptFrom(0,0);		// 구문 해석시 "함수모양"으로 해석해서 실패
	Point ptFrom{ 0,0 };		//	ok,이 표기법을 사용하면 됩니다.
	Point ptTo{ 0,0 };
public:
	Rect() {}
	Rect(int x1, int y1, int x2, int y2) : ptFrom(x1, y1), ptTo(x2, y2)	//디폴트 생성자가 없으면 초기화한다.
	{
		std::cout << "Rect()" << std::endl;
	}
};
int main() {
	Rect rc(1, 1, 10, 10);		
}