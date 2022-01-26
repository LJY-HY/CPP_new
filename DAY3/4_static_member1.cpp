#include <iostream>
//	���� ���� ���
//	
//

//	Car.h					//	�̰Ŵ� ��¥ "����"��!!
class Car {
	int speed;
	static int cnt;

public:
	Car();
	~Car();
	static int get_count();
};

//	Car.cpp
#include "Car.h"
int Car::cnt = 0;			//	static ��� ������ �ܺ� ������ source���Ͽ� �־�� �Ѵ�.
Car::Car() {
	++cnt; 
}
Car::~Car() {
	--cnt; 
}
int Car::get_count() { return cnt; }		// static member function�� �ܺ� ������ static ����


int main() {
	
}