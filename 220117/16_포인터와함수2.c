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
	// swapÇÔ¼öÈ­
	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}