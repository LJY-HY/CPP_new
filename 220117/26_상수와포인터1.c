#include <stdio.h>
#if 0
int main() {
	int c1 = 10;		//변수
	const int c2 = 20;	//상수 :1. 반드시 초기값 지정해야한다. 2. 값 변경하는 것이 불가능하다.
	int const c3 = 10;
	//c2와 c3는 동일한 상수이다. 즉 type의 앞/뒤 둘 다에 올 수 있다.
	//c2 = 10;
	//c3 = 30;

}
#endif
#if 0
int main() {
	int n = 0;
	int* p = &n;
	const int* p2 = &n;//p2의 포인터를 통해서 대상체 n의 값을 변경하지 않겠다.

	const n2 = 3;
	//	int*=>const int는 좋은 접근이 아니다
	//int* p3 = &n2;		//C언어에서는 warning만 주지만 C++에서는 error발생. 모든 warning은 error로 보는 것이 좋다.
	const int* p4 = &n2;


}
#endif
typedef int* PINT;
typedef const PINT WHERE_CONST;		//얘는 const int*가 아님 
int main() {
	int n = 10;
	//	*를 중심으로 살펴봐라
	//	앞 : 가르키는 대상체(n)을 상수 취급하겠다.
	//	뒤 : 포인터 변수를 상수 취급하겠다.
	const int* p1 = &n;				// const int 를 가리키는 것처럼의 pointer이다. 값 대입 X
	int const* p2 = &n;				// 위와 동일
	int* const p3 = &n;				// int를 가리키는 const pointer이다. 다른 애를 기리키는건 안된다.
	const int* const p4 = &n;		// const int를 가리키는 const pointer이다.
	int const* const p5 = &n;		// 위와 동일
}