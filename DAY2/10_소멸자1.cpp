#include <iostream>

class Point {
	int x = 0;
	int y = 0;

public:
	Point() { std::cout << "Point()" << std::endl; }
	//	소멸자 : "~클래스 이름"모양의 함수
	//			인자와 반환값이 모두 없다.
	//			객체가 파괴될때 호출된다.
	//	필요한 경우만 만들면 되고, 필요없다면 만들 필요 없다.
	~Point() { std::cout << "~Point()" << std::endl; }
};

int main() {
	{
		Point pt;	
	}//<==파괴.
	std::cout << "-----------" << std::endl;
}