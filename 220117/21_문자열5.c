#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//	1.	문자열 길이 함수
//		=>strlen
// 
//	2.	문자열 복제 함수
//		=> 동적 메모리 할당을 통해 문자열을 복제합니다.
//		=> strdup
//		=> 반드시 free해줘야한다.
//
int main() {
	char str[32] = "hello";
	printf("%lu\n", sizeof(str));		//이거 결과 6이 나온다. '\0'때문에
	printf("%lu\n", strlen(str));
	// 동적 메모리 할당을 통해 문자열을 할당하고 싶다.
	// 1. 문자열 길이 +1 만큼의 메모리를 할당합니다.
	char* p =(char*) malloc(strlen(str) + 1);//6byte의 메모리가 할당된다.
	strcpy(p, str);
	printf("%s\n", p);


	//	3. 메모리 해지
	free(p);
	return 0;
}