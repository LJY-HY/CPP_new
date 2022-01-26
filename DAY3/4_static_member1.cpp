#include <iostream>
//	파일 분할 방법
//	
//

//	Car.h					//	이거는 진짜 "선언"만!!
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
int Car::cnt = 0;			//	static 멤버 변수의 외부 선언은 source파일에 있어야 한다.
Car::Car() {
	++cnt; 
}
Car::~Car() {
	--cnt; 
}
int Car::get_count() { return cnt; }		// static member function은 외부 구현시 static 생략


int main() {
	
}