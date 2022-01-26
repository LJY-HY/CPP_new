#include <iostream>
class Point {
public:
	int x;
	int y;
	Point() : y(0), x(y) {}			//	undefined
									// "표준문서에서는 사용하지 말라고만 되어있고 사용하면 어떻게 된다고는 정의한적이 없음
									// 컴파일러마다 현상이 다르다.
									//	해결책은 x,y 순서대로 초기화할것.
};

int main() {
	Point p1;
	std::cout << p1.x << std::endl;
	std::cout << p1.y << std::endl;
}