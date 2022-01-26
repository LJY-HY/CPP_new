#include <stdio.h>
//// ##
////	=> 두 개 토큰을 하나의 토큰으로 만들어준다.
////	=>활용 : 매크로를 이용해서 코드를 생성하는 도구로 사용
//#define print_value(x)\
//printf("%d, %d\n",x##1,x##2)
//int main() {
//	int value1 = 10;
//	int value2 = 20;
//	print_value(value);
//}


//	assert 단언문
//	이는 제품 코드에는 들어가지 않고 테스트 코드에 들어간다.
#define assert(expr)do{\
if (!(expr)){	\
printf("assertion failed: %s, %s,%d", #expr, __func__, __LINE__);	\
abort();\
}\
}while(0)

//	컴파일 시간에 표현식의 유효성을 확인하는 방법을 제공할 수 있다.
#define static_assert(expr)	\
char __static_assert_failed[(expr) ? 1:-1];	\
// expr이 거짓이면 의도적으로 -1크기의 배열을 만들어 compile오류를 발생시켜버린다.
int main() {
	// 삼항연산자
	
	int age;
	int ret = scanf("%d", &age);
	int next=0;
	next = (age > 0) ? next + 1 : 0;
	assert(age > 0);
}