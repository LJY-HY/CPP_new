#include <iostream>

int g = 0;
int x[100000];
int main() {
	int n = 0;
	int* p = new int;
	  
	const char* s = "hello";
	printf("�������� �ּ� : %p\n", &g);
	printf("�������� �ּ� : %p\n", &n); 
	printf("�����Ҵ� �޸� �ּ� : %p\n", p);
	printf("main �Լ��ּ�: %p\n", &main);
	printf("��� �ּ� : % p\n", s);
	delete p;
	x[0] = 10;
}