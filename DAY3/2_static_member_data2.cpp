#include <iostream>
//	��� 2. �������� ���
//		=> ��� ��ü�� �����Ѵ�.
//		=> Car ��ü�� ���� �ľ� ����!!
//	����1.	�׷��� cnt��� ������ ������ ���ٰ����ϹǷ� �������� �ʴ�.
//			Car ����� ������ �� �ֵ��� ��ȣ�� �� ������?
//			private(Car�� ���) �� ����� �� ������?	-----> ���������� ����� �ƴϹǷ� �ȵ�
//	����2.	Truck Ŭ������ ������ �ľ��Ϸ��� ���� �������� �ʿ�
//			"cnt"���� �ٸ� �̸��� �ʿ��� "truck_cnt"�� ����.....
//
int cnt = 0;
class Car {
	int spped;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main() {
	Car c1;
	Car c2;
	cnt = 100;		//������� �Ǽ�
	std::cout << cnt << std::endl;

}