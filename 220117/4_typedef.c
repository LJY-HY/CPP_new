#include <stdio.h>
//	1.	typedef는 기존 타입에 새로운 별명을 부여할 수 있습니다.
//		=>type aliasing
// 
//	int - 4바이트
//	char- 1바이트
//	short-2바이트
//	long- 4바이트/8바이트
# if 0
typedef int int32;
typedef char int8;
typedef short int16;
typedef long long int64;

#include <stdint.h>		//위의 typedef를 사실 정의해둔 header파일이 존재한다.

int main() {
	// int8_t / int16_t / int32_t / int64_t
	int8_t c2;
	int32 n = 10;		// int n
	int8 c = 100;			// char c
	printf("%d %d\n", n, c);
}
#endif
//	2.	복잡한 타입 표현식을 typedef를 통해서 간결하게 표현이 가능
//		배열의 기호는 '반드시 심볼 뒤'에 와야한다. 이를 typedef을 통해 직관적으로 바꿀 수 있다.
//
typedef int ARR[10];
// typedef int[10]을 ARR로 표현하겠다.
int main() {
	int n;			// int타입
	int arr[10];	// int[10]타입
	ARR arr2;
}
