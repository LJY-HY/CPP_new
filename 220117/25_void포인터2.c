#include <stdio.h>
#include <stdlib.h>
// 타입에 일반적인 swap을 만들 수 있다.

//	1. 매크로 함수 활용
//	매크로 함수를 작성할 때, 여러개의 구문을 하나의 함수로 작성한다면
//	do-while(0)를 사용한다.
#if 0
#define SWAP(a,b,type)	do{	\
type temp=a;				\
a = b;						\
b=temp;						\
}while(0)

void swap(int* a, int* b) {
	// 이 함수는 int끼리만 swap할 수 있다.
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	SWAP(a, b, int);
	double aa = 10.2;
	double bb = 20.5;
	SWAP(a, b, double);
	printf("%d %d\n", a, b);
	return 0;
}
#endif
#include <string.h>
//	2. void*활용
//	memcpy
//	:메모리를 복사하는 함수
//
void xmemcpy(void* dst, void* src, int size) {
	//char* s = (char*)src;
	//char* d = (char*)dst;
	//for (int i = 0; i < size; i++) {
	//	*d++ = *s++;
	//}
	while (size--) {
		*((char*)dst)++ = *((char*)src)++;
	}
}

void swap(void* x, void* y, int size) {
	//g++의 경우 아예 void*를 char*로 취급해버린다.
	char* temp = (char*)malloc(size);		// 1바이트 단위(char)로 동적할당을 해주겠다.(어떤 데이터 타입인지 모르니깐)
	xmemcpy(temp, x, size);
	xmemcpy(x, y, size);
	xmemcpy(y, temp, size);
	free(temp);
}
int main() {
	int a = 10;
	int b = 20;
	swap(&a, &b, sizeof(a));
	printf("%d %d\n", a, b);

	char str1[32] = "hello";
	char str2[32] = "world";
	swap(str1, str2, sizeof(str1));
	printf("%s %s\n", str1, str2);
}