#include <iostream>

void f(int n) { std::cout << "int" << std::endl; }
void f(double n) { std::cout << "double" << std::endl; }
void f(bool n) { std::cout << "bool" << std::endl; }
void f(int* n) { std::cout << "int*" << std::endl; }
int main() {
	// literal(리터럴)	: 프로그램에서 사용되는 이름 없는 "값" 들.
	// 키워드			: 컴파일러에서 미리 정의된 값들
	f(0);		// int.		"0은 정수형 리터럴, int 타입"
	f(0.0);		// double	"0.0은 실수형 리터럴, double 타입"
	f(false);	// bool		"false는 bool 형 리터럴, 키워드"
	f(nullptr);	// int*		"nullptr는 포인터형 리터럴, 키워드"

	//모든 리터럴은 타입이 있습니다.
	10;		//int 타입
	3.4;	//double타입
	false;	//bool타입
	nullptr;//std::nullptr_t 라는 이름의 타입
			//std::nullptr_t 타입은 "모든 종류의 포인터"로 암시적 형변환된다. 라는 문법을 가지고 있습니다.

	std::nullptr_t a = nullptr;
	//이제 변수 a는 nullptr과 같은 용도로 사용가능

	int* p1 = a;		// int* p1=nullptr; 과 동일
}