#include <iostream>
//	방법 2. 전역변수 사용
//		=> 모든 객체가 공유한다.
//		=> Car 객체의 갯수 파악 성공!!
//	단점1.	그런데 cnt라는 변수는 누구나 접근가능하므로 안전하지 않다.
//			Car 멤버만 접근할 수 있도록 보호할 수 없을까?
//			private(Car만 사용) 을 사용할 수 없을까?	-----> 전역변수는 멤버가 아니므로 안됨
//	단점2.	Truck 클리스도 갯수를 파악하려면 역시 전역변수 필요
//			"cnt"말고 다른 이름이 필요함 "truck_cnt"와 같이.....
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
	cnt = 100;		//사용자의 실수
	std::cout << cnt << std::endl;

}