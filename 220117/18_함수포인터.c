#include <stdio.h>
//	함수 포인터
//	:함수를 가르키는 포인터 변수
//
//
int add(int a, int b) { return a + b; }
//	add의 타입은 : 이름을 뺀 나머지=>		int(int a, int b)
//	=>함수의 타입은 "함수의 반환타입과 인자정보"에 의해서 결정됩니다.
//	=>함수의 타입은 "함수의 시그니처"에 의해서 결정됩니다.
//	sub함수는 add와 함수 타입이 동일하다.
//	=>함수의 시그니처가 동일하면 같은 타입이다.
int sub(int a, int b) { return a - b; }
//	int(int a, int b)
//	그러면 함수 포인터를 만들어보면
//	int(int,int) *p=&add로 만들면 되는데
//	(int,int)는 이름 뒤로 가야하므로
//	int *p(int,int)
//	=>두가지로 해석가능
//		1)int *p(int,int)
//			int 2개를 인자로 받고 int형 pointer를 반환하는 "함수"이다.
//		2)int (*p)(int,int)
//			[p]=====>int(int,int)
//			p는 int (int,int)타입 함수를 가리키는 포인터가 됨
//	
//
int main() {
	int (*p)(int, int) = &add;
	p = &sub;						// 런타임동안 함수 포인터를 바꾸어줌으로써 수행하는 동작을 변경시켜줄 수 있다.	"Callback"
	printf("%d\n", (*p)(10, 20));
	return 0;
}

//	함수포인터
//