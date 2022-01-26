//	접근지정자 : 멤버데이터를 외부에서 직접 접근하면 객체의 상태가 불안해질 수 있다.
//				데이터를 private영역에 놓아서 외부에 잘못된 사용을 막는다.

//	캡슐화(encapsulation), 정보은닉(information hiding)

//	용어정리
//	객체(object)		:	세상에 존재하는 모든 사물
//						프로그램에서 변수/함수 등도 모두 object dlwlaks
//	관례적으로
//	int n;	// "변수" 라고 합니다.
//	Bike b;	// "객체(object)"라는 용어를 사용합니다.

//	C++에서 struct vs class 차이점은 아래 단 한가지.
//			C#, java 등의 다른 언어는 차이점이 아주 많다.
//	struct	: 접근지정자 생략시 public이 default
//	class	: 접근지정자 생략시 private이 default
//	객체지향은 무조건 안전지향. 따라서 class를 선호한다.

//struct Bike {
class Bike{
//private:		//private 접근 지정자
				//멤버 함수에서만 접근할 수 있고 외부에서는 접근할 수 없다.
				//새로운 접근 지정자가 나올때까지 아래의 모든 멤버들은 private
	int speed;
	int gear;		
public:			//public 접근 지정자
				//외부에서도 접근 가능하다
	void setGear(int value) {
		if(value>0)		//인자 값의 유효성을 확인 후에 상태를 변경한다.
			gear = value;

	}
};

int main() {
	Bike b;
	//b.speed = 30;	//	error
	//b.gear = -10;	//	error
	b.setGear(-10);	//	ok. 하지만 잘못된 값이므로 상태 변경안됨
}

