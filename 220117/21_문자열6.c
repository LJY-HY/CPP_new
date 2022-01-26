#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//	토큰을 분리하는 함수 =>strtok
//	: 내부적으로 정적메모리(전역변수, 내부 정적변수)를 사용합니다.

int main() {
	char str[] = "hello world show me";
	for (char* p = strtok(str, " "); p != NULL; p = strtok(NULL, " ")) {
		printf("%s\n", p);
	}
	
	//char * p=strtok(str, " ");			// p는 전역. 첫" "을 '\0'로 바꿈. 그 다음을 전역변수 gstr이라는 변수가 가리키고 있음
	//printf("%s\n", p);
	//p = strtok(NULL, " ");
	//printf("%s\n", p);
	//p = strtok(NULL, " ");
	//printf("%s\n", p);
	//p = strtok(NULL, " ");
	//printf("%s\n", p);
}