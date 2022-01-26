#include <iostream>
//	방법3.	static member data(정적멤버데이터)
//	클래스당 한개씩 사용하는 전역변수로 볼 수 있다.
//	접근지정자를 사용가능한 전역변수	
//
class Car {
	int spped;
public:
	static int cnt; //static멤버데이터
					//=0;로 초기화됩니다. 여기서는 초기화 할 수 없음.
	Car() { ++cnt; }
	~Car() { --cnt; }
};
//	static 멤버 데이터는 외부 선언이 필요합니다. 초기화도 여기서.
int Car::cnt = 0;
int main() {
	// static 멤버데이터는 객체가 없어도
	// 메모리에 존재합니다.
	std::cout << Car::cnt << std::endl;


	// main이 비어있어도 Car::cnt를 위한 메모리는 할당되어있다. 결국 전역변수이다.
	// 해석해보면 "나는 Car객체가 사용하는 전역변수다~" 이다.
	// 모든 메모리 이슈, 할당이슈는 전역변수와 동일
	// 대신 나중에 객체 메모리 c1/c2에는 안잡힌다.
	Car c1;
	Car c2;

	//	static 멤버데이터 접근 방법
	//	1. 클래스 이름::cnt		==>권장
	//	2. 객체이름.cnt			==>다만 이 경우 cnt가 static인지 아닌지 알 수 없다.
	std::cout << Car::cnt << std::endl;
	std::cout << c1.cnt << c2.cnt << std::endl;

	//	다른 객체지향 언어(C#, java, swift 등)은 모두 "클래스 이름"으로만 static 멤버에 접근 가능.

}