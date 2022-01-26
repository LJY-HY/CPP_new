#include <stdio.h>
//	포인터 변수 크기
//	=>주소를 저장하기 때문에 주소 타입의 크기가 나온다
//	=>32-bit운영체제에서는 4byte
//	=>64-bit운영체제에서는 8byte가 나온다.
//	=>이는 비주얼스튜디오의 설정에 따라 다르게 나옴
// 
//	
//
int main() {
	int n = 10;
	int* p = &n;
	double d = 3.14;
	double* p2 = &d;

	char c = 'a';
	char* pc = &c;

	printf("%lu\n", sizeof(n));//4
	printf("%lu\n", sizeof(p));//8
	printf("%lu\n", sizeof(p2));//8
	printf("%lu\n", sizeof(pc));//8
	return 0;
}