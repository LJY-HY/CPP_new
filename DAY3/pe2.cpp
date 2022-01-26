#include <iostream>

int g = 0;
int x[100000];
int main() {
	int n = 0;
	int* p = new int;
	  
	const char* s = "hello";
	printf("傈开函荐 林家 : %p\n", &g);
	printf("瘤开函荐 林家 : %p\n", &n); 
	printf("悼利且寸 皋葛府 林家 : %p\n", p);
	printf("main 窃荐林家: %p\n", &main);
	printf("惑荐 林家 : % p\n", s);
	delete p;
	x[0] = 10;
}