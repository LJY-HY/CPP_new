#include <iostream>
class Point {
public:
	int x;
	int y;
	Point() : y(0), x(y) {}			//	undefined
									// "ǥ�ع��������� ������� ����� �Ǿ��ְ� ����ϸ� ��� �ȴٰ�� ���������� ����
									// �����Ϸ����� ������ �ٸ���.
									//	�ذ�å�� x,y ������� �ʱ�ȭ�Ұ�.
};

int main() {
	Point p1;
	std::cout << p1.x << std::endl;
	std::cout << p1.y << std::endl;
}