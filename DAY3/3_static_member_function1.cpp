#include <iostream>
//
class Car {
	int speed;
	static int cnt;

public:
	Car() { ++cnt; }
	~Car() { --cnt; }
	//int get_count() { return cnt; }		//	인스턴스 메소드
											//	반드시 객체가 있어야 호출가능하다
											//	c1.get_count()
	static int get_count() { return cnt; }	//	"객체없이" 호출가능한 멤버함수(메소드)---> 일반함수아냐? 
											//	일반함수인데 private 영영게 접근할 수 있다.
											//	Car::get_count() 로 호출
};
int Car::cnt = 0;							// private인데 이거는 왜 되지?? ==> 그냥 문법상 허용해줌...
int main() {
	std::cout << Car::get_count() << std::endl;

	Car c1;
	Car c2;
	
	//	인스턴스 매소드 부르는 방법 두가지
	std::cout << Car::get_count() << std::endl;		//	<==권장
	std::cout << c1.get_count()<< std::endl;		

}