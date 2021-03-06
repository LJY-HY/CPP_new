#include <stdio.h>
//	1.	배열의 이름은 배열의 첫번째 원소의 시작 주소로 해석된다
//		=>decay
//		=예외
//			1)sizeof	
//			2)&
//	2.	포인터에 대해 증/감 연산 수행 가능
//		=>포인터에 대해 +/-연산 수행 가능
//		=>p+1은??
//		=>포인터 변수에 대해서 증가하거나 감소하면 "대상체의 크기 만큼 증가(감소)"합니다.
//
int main() {
	int x[5] = { 1,2,3,4,5 };
	int* p = x;

	printf("%p\n", p);
	printf("%p\n", x);
	//printf("%p\n", p + 1);			// p + sizeof(int)*1
	*(p + 2) = 200;						// [1,2,200,4,5]		x[2]=200	p[2]=200	2[x]=200 다 됨(+는 교환법칙이 성립하므로)
	//그래서 *(x+2)와 같이 쓰지 말고 p사용해라
	printf("%d\n", p[2]);

	int* p2 = x + 3;					//p2 = x의 주소 +12
	p2[-1] = 150;						//*(p2-1)=150		이런 코드 언제 쓸까??
	return 0;
}