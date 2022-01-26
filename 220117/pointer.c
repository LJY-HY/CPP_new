#include <stdio.h>

int main() {
	int(*p)[3] = NULL;	
	printf("%p\n", p + 1);
}