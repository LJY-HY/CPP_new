#include <iostream>
// Car객체가 몇개나 생성되었는지 조사하고 싶다.
// 방법 1. 멤버데이터 사용
//		=> 멤버 데이터는 객체당 한개가 생성된다.
//		=> 객체의 갯수 파악 실패!!!!
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