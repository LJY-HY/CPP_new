#include <stdint.h>
//	1.	포인터 변수 + 포인터 변수는 허용되지 않는다.
//	2.	포인터 변수 +- 정수
//		=>가르키는 대상체의 크기를 곱한만큼 계산됩니다.
//	3.	포인터 변수- 포인터 변수
//		=>가능
//		=>offset(long)이 나옴
//
int main() {
	int x[5] = { 1,2,3,4,5 };
	int* p1 = x;
	int* p2 = x + 4;

	printf("%ld\n", p2 - p1);	//4
	return 0;
}