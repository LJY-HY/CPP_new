#include <iostream>

class Point {
	int x;
	int y;
public:
	//	����ڰ� �����ڸ� �ϳ��� ������ ������ �����Ϸ��� ���� ���� �����ڸ� ����
	//	=>����Ʈ �����ڶ�� �Ѵ�.
	//	�����Ϸ��� �����ϴ� �����ڴ� �ƹ� �ϵ� ���� �ʽ��ϴ�.		(��� ����������� ����)
	//	�����Լ��� �ִ� ��� "�����Լ� ���̺� �ʱ�ȭ"�� �մϴ�.
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int,int)" << std::endl; }
};

int main() {
	//	��� ��ü�� �����Ǹ� �ݵ�� �����ڰ� ȣ��Ǿ�� �Ѵ�.
	//Point p1;							//	1�� ������ ȣ��
	//Point p2(1, 2);					//	2�� ������ ȣ��

	Point arr1[5];						//	1�� ������ 5�� ȣ��
	Point arr2[5] = { {1,2},{0,0} };	//	1�� ������ 3�� / 2�� ������ 2��
	Point* p;							//	��ü ���� �ƴ�... ������ ȣ�� �ȵ�

	p = static_cast<Point*>(malloc(sizeof(Point)));	//������ ȣ�� �ȵ�. Point Ÿ�������� �ƴ� ũ�� 8����
	free(p);

	//	new�� ������ ȣ���
	p = new Point;						//	1�� ������
	delete p;

	p = new Point(1, 2);				//	2�� ������
	delete p;

	// C++11���ʹ� �Ʒ� ǥ�⵵ ����
	Point p3(1, 1);			// C++98����
	Point p5{ 1,1 };		//C++11 direct initialization
	Point p6 = { 1,1 };		//C++11 copy initialization
}