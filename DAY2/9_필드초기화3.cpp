#include <iostream>

class Point {
	int x;
	int y;
public:
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int,int)" << std::endl; }
};
class Rect {
	//Point ptFrom(0,0);		// ���� �ؼ��� "�Լ����"���� �ؼ��ؼ� ����
	Point ptFrom{ 0,0 };		//	ok,�� ǥ����� ����ϸ� �˴ϴ�.
	Point ptTo{ 0,0 };
public:
	Rect() {}
	Rect(int x1, int y1, int x2, int y2) : ptFrom(x1, y1), ptTo(x2, y2)	//����Ʈ �����ڰ� ������ �ʱ�ȭ�Ѵ�.
	{
		std::cout << "Rect()" << std::endl;
	}
};
int main() {
	Rect rc(1, 1, 10, 10);		
}