#include <stdio.h>	
//
//
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 10;
	int b = 20;
	// swap
	//int temp = a;
	//a = b;
	//b = temp;
	// swap�Լ�ȭ
	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}