#include <iostream>

class Point {
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int,int)" << std::endl; }
};
class Rect {
	Point ptFrom;
	Point ptTo;
public:
	Rect() { std::cout << "Rect()" << std::endl; }
};
int main() {
	Rect rc;		//	멤버의 생성자가 먼저 호출되고 자신의 생성자가 호출된다.
}