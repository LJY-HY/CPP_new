//	변수와 타입의 크기확인
//
#include <stdio.h>

int main() {
	int num = 10;
	//%d : unsigned long 이는 warning을 발생시킨다
	//%lu로 하는것이 좋다.
	printf('%d\n', sizeof(n));
	printf('%d\n', sizeof(int));

	// 변수에 대해서는 sizeof num과 같이 ()없이도 쓸 수 있다.
	// sizeof int와 같이 type에 대해서는 적용안됨
}