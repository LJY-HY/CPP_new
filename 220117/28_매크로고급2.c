#include <stdio.h>

int main() {
#ifdef _MSC_VER
	printf("Windows\n");
#else
	printf("else\n");
#endif 
}