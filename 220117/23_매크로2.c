#include <stdio.h>
//	매크로 함수=>텍스트치환으로써 동작한다.
//	주의해서 사용해야한다.
//	1.	매크로 함수의 인자는 반드시 괄호를 통해 우선순위가 변경되는 문제를 방어해야한다.
//
#define SQUARE(x) ((x)*(x))
//	2. ++연산을 매크로 함수 등에 전달하는 것은 미정의 동작이 발생할 수 있다.
// 
//	장점:	매크로 함수는 호출이 아니라 컴파일 이전에 텍스트 치환을 수행하기 때문에 호출의 오버헤드가 없다.
//
int main() {
	int x = 10;
	int y = 10;
	printf("%d\n", SQUARE(x+y));
	//printf("%d\n,x+y*x+y) 로 치환되어 120이라는 값이 나온다.
	printf("%d\n", SQUARE(++x));
	//((++x))*((++x))라는 단일 sequence에서 동일한 연산을 반복하면 결과는 미정이다.
	printf("%d\n", SQUARE(10));		
}