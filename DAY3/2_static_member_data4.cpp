#include <iostream>
//	
//
class Car {
	int spped;
public:
	static int cnt;		
						
	Car() { ++cnt; }
	~Car() { --cnt; }
};
class Truck {
	int spped;					//	��ü�� �Ѱ�, "�ν��Ͻ� �ʵ�(���������)"��� ��� ���			==> ��ü�� �ϳ�
public:
	static int cnt;				//	��� Truck ��ü�� ���� "Ŭ���� �ʵ�(���������)"��� ��� ���	==> Ŭ������ �ϳ�

	Truck() { ++cnt; }
	~Truck() { --cnt; }
};
int Truck::cnt = 0;
int main() {
	
}