#include <stdio.h>
//매크로 상수
//=>대문자_대문자(convention)
//	1)배열의 크기를 관리할 때
//	2)상수 값에 의미 있는 이름을 부여할때
//
#define PI 3.14
#undef PI		//이미 정의된 매크로 상수를 제거합니다.

int main() {
	printf("%d\n", PI);
}