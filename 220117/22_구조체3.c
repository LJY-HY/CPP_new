#include <stdio.h>
//
//	C언어에서는 typedef를 이용하여 COMPLEX를 COMPLEX로 바꿀 수 있다.
typedef struct Complex {
	// 구조체의 이름을 만들 때 규칙이 있는게 좋다. 일관성
	//[[real:8byte][imagin:8byte]]
	double real;		// 멤버 변수/ 멤버 데이터		.을 통해 접근할 수 있다.
	double imagin;
	int arr[100];
} COMPLEX;

//	1. static 메모리의 주소를 반환
//		-> 스레드 안정성 고려해야한다.
COMPLEX add1(const COMPLEX* c1, const COMPLEX* c2) {
	static COMPLEX result;
	//result.real = (*c1).real + (*c2).real;		// .real이 먼저 결합되므로 ()로 먼저 묶어주어야한다.
	//위는 너무 번거롭다. (*p).는 p->로 바꾸어줄 수 있다.
	result.real = c1->real + c2->real;
	result.imagin = c1->imagin + c2->imagin;
	return &result;
}
//	2. malloc
//	=> free를 잊으면 안된다.
COMPLEX* add2(const COMPLEX* c1, const COMPLEX* c2) {
	COMPLEX* result = (COMPLEX*)malloc(sizeof(COMPLEX));
	result->real = c1->real + c2->real;
	result->imagin = c1->imagin + c2->imagin;
	return result;
}

//	3.	out parameter
//	=>	
void add3(const COMPLEX* c1, const COMPLEX* c2, COMPLEX* result) {
	COMPLEX* result = (COMPLEX*)malloc(sizeof(COMPLEX));
	result->real = c1->real + c2->real;
	result->imagin = c1->imagin + c2->imagin;
	return result;
}
int main() {
	//COMPLEX a = { 1,1 };				   이런 방법은 순차적으로 들어가야하지만
	//COMPLEX b = { 2,2 };
	COMPLEX a = { .real = 1,.imagin = 1 };//이런 방법은 순차적일 필요 없이 멤버를 지정해서 대입할 수 있다.
	COMPLEX b = { .real = 2,.imagin = 2 };
	printf("%llu\n", sizeof(a));
	COMPLEX r = add(&a, &b);
	printf("resuls : %lf %lf\n", r.real, r.imagin);
	return 0;
}