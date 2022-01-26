#include <iostream>

class Point {
	int x;
	int y;
public:
	//Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int,int)" << std::endl; }
};
//	Point p1;		//error 디폴트 생성자가 없음.
//	Point p2(0,0);	//ok
class Rect {
	Point ptFrom;		//얘 그냥 놔두면 error임.	
	Point ptTo;
public:
	//	아래 코드를 꼭 기억해라. 많은 C++개발자들이 잘 못하는 부분
	Rect(int x1, int y1, int x2, int y2) : ptFrom(x1,y1),ptTo(x2,y2)
	{ std::cout << "Rect()" << std::endl; }
};
int main() {
	Rect rc(1,1,10,10);		//	멤버의 생성자가 먼저 호출되고 자신의 생성자가 호출된다.
							//	그러면 어쨌든 error아닌가? Point ptFrom하면?? 왜 에러가 아니지?
}