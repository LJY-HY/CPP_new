#include <iostream>
class Test {
	int data;
public:
	void f1(int n) {								//	void f1(Test* this) 로 컴파일 시 변경
		std::cout << this << std::endl;
		data = 10;							//	this->data=10	으로 변경
	}
	static void f2(int n) {						//	void f2()	로 컴파일 시 변경
		std::cout << this << std::endl;		//	error. this 없음.
		data = 10;							//	this->data=10으로 바꿔야 하는데 this 자체가 없음. ERROR
											//	그래서 static 멤버 함수에서는 인스턴스 멤버에 접근 안된다.
											//	반대로 static 멤버 함수에서는 static 데이터에만 접근 가능하다.
	}
};

int main() {
	Test t;				//	f1을 호출하려면 객체가 필요합니다.
	t.f1(10);				//	컴파일 시에 f1(&t)로 변경되는 원리입니다.

	Test::f2(10)			//	객체 없이 호출했습니다.
						//	따라서, 컴파일 되어도 "f2()"입니다.
						//	즉, 인자가 추가될 수 없습니다.
}