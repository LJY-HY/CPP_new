#include <stdio.h>

//	함수의 구현이 어딘가에 존재한다는 사실을 컴파일러에게 알려줌=>선언
#include "calc.h"		// include guard개념도 공부할것

// Ctrl + F7 : Compile은 됨
// Ctrl + F5 : Compile + Linking => a.exe가 안만들어짐  Linking 오류가 발생

// Compile : 파일 단위로 실행
int main(){
	int a = 3;
	int b = 5;
	int result1 = add(a, b);
	int result2 = sub(a, b);
	printf("%d %d\n", result1, result2);
	return 0;
}