#include <iostream>
// Car��ü�� ��� �����Ǿ����� �����ϰ� �ʹ�.
// ��� 1. ��������� ���
//		=> ��� �����ʹ� ��ü�� �Ѱ��� �����ȴ�.
//		=> ��ü�� ���� �ľ� ����!!!!
class Car {
	int spped;
public:
	int cnt = 0;
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main() {
	Car c1;
	Car c2;
	std::cout << c1.cnt << std::endl;

}