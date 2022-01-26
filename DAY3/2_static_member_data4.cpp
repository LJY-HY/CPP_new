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
	int spped;					//	객체장 한개, "인스턴스 필드(멤버데이터)"라는 용어 사용			==> 객체당 하나
public:
	static int cnt;				//	모든 Truck 객체가 공유 "클래스 필드(멤버데이터)"라는 용어 사용	==> 클래스당 하나

	Truck() { ++cnt; }
	~Truck() { --cnt; }
};
int Truck::cnt = 0;
int main() {
	
}