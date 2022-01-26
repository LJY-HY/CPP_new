#include <iostream>
class Bike {
//struct Bike{
//public:
	int speed;
	int gear;
public:
	//	생성자 : 객체를 생성하면 자동으로 호출되는 함수
	//	특징		:	클래스 이름과 동일
	//				반환 타입을 적지 않고 반환할수도 없다.
	//				인자는 있어도 되고 없어도 된다.
	//void init() {
	Bike(){
		std::cout << "Bike()" << std::endl;
		speed = 10;
		gear = 20;
	}
};
int main() {
	//Bike b = { 30,10 };	//데이터가 public에 있으면 이렇게 초기화 가능
						//결국, class도 struct와 (거의)동일하므로
						//하지만 private에 있다면 error
	Bike b;
	//b.init();			//객체를 만들고 자동으로 불리게 할 수 없을까?
}