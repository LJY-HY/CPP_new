#include <iostream>

int g = 10;

class Test {
	int value = ++g;		//���� �̷��� ���� ������
							//0���� literal�� ����ϼ���
public:
	Test() {}
	Test(int n) : value(n) {}
	//	Test()	: value(++g){}	�����ϱ� �� ����.
	//	Test(int n):value(n){}
};

int main() {
	Test t1;
	Test t2(5);
	std::cout << g << std::endl;
}