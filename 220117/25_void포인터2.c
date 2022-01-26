#include <stdio.h>
#include <stdlib.h>
// Ÿ�Կ� �Ϲ����� swap�� ���� �� �ִ�.

//	1. ��ũ�� �Լ� Ȱ��
//	��ũ�� �Լ��� �ۼ��� ��, �������� ������ �ϳ��� �Լ��� �ۼ��Ѵٸ�
//	do-while(0)�� ����Ѵ�.
#if 0
#define SWAP(a,b,type)	do{	\
type temp=a;				\
a = b;						\
b=temp;						\
}while(0)

void swap(int* a, int* b) {
	// �� �Լ��� int������ swap�� �� �ִ�.
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
//	2. void*Ȱ��
//	memcpy
//	:�޸𸮸� �����ϴ� �Լ�
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
	//g++�� ��� �ƿ� void*�� char*�� ����ع�����.
	char* temp = (char*)malloc(size);		// 1����Ʈ ����(char)�� �����Ҵ��� ���ְڴ�.(� ������ Ÿ������ �𸣴ϱ�)
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