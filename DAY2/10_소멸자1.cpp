#include <iostream>

class Point {
	int x = 0;
	int y = 0;

public:
	Point() { std::cout << "Point()" << std::endl; }
	//	�Ҹ��� : "~Ŭ���� �̸�"����� �Լ�
	//			���ڿ� ��ȯ���� ��� ����.
	//			��ü�� �ı��ɶ� ȣ��ȴ�.
	//	�ʿ��� ��츸 ����� �ǰ�, �ʿ���ٸ� ���� �ʿ� ����.
	~Point() { std::cout << "~Point()" << std::endl; }
};

int main() {
	{
		Point pt;	
	}//<==�ı�.
	std::cout << "-----------" << std::endl;
}