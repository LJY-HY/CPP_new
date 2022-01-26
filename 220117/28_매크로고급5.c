#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//	매크로문법
//	=>#, ##
//	# : 전달된 토큰을 문자열로 변경
//	매크로가 아니면 못씀. 전처리기에서만 쓸 수 있음
#define print_value(x) \
printf("%s\n",#x)
#define MAX 256
#define TOSTR(x) #x
#define _TOSTR(x) TOSTR(x)
int main() {
	int value1 = 10;
	int value2 = 20;
	print_value(10);
	printf("%s\n", TOSTR(MAX));	// 문자열로 변경하는 매크로는 매크로 상수에 대한 치환이 제대로 수행되지 않습니다.
								// 매크로 상수가 제대로 치환되도록 하기 위해서 이중으로 구성됩니다.

}