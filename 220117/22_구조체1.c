#include <stdio.h>
//	복소수 2개의 합을 구하는 함수를 만들자
//	=>함수는 하나의 값만 반환하는 것이 가능하다.
// 
//	1. out parameter
//	: 결과를 함수 인자를 통해 받아옵니다.
//	=>주소를 전달해야한다.
//
//
#if 0
void add(double ar, double ai, double br, double bi,double* sr, double* si) {
	*sr = ar + br;
	*si = ai + bi;
}
#endif

//	2.	구조체
//	=>사용자 저으이 타입을 만드는 문법
//	=>build-int type / primitive type
//		기본적으로 제공하는 타입
//	=>복소수를 나타내기 위해서 필요한 데이터ㅡㄹㄹ 구조체로 만들 수 있습니다.
// 
//	3. 구조체 타입의 크기
//	=>sizeof
//
//	4. 구조체는 call by value로 동작합니다.
//	=>인자로 전달된 구조체에 대해서 복사가 수행됩니다.
//	=>구조체의 크기가 크면 복사해오는 양이 너무 많다.
//	=>value대신에 주소를 전달해주자(call by reference)
// 
//	5. struct Complex c;
//		c.imagin
//		c.real
//	   struct Complex* c;
//		(*c).imagin	/	c->imagin
//		(*c).real	/	c->real	
//
struct Complex {
	// 구조체의 이름을 만들 때 규칙이 있는게 좋다. 일관성
	//[[real:8byte][imagin:8byte]]
	double real;		// 멤버 변수/ 멤버 데이터		.을 통해 접근할 수 있다.
	double imagin;
	int arr[100];
};

//	1. static 메모리의 주소를 반환
//		-> 스레드 안정성 고려해야한다.
struct Complex add1(const struct Complex* c1, const struct Complex* c2) {
	static struct Complex result;
	//result.real = (*c1).real + (*c2).real;		// .real이 먼저 결합되므로 ()로 먼저 묶어주어야한다.
	//위는 너무 번거롭다. (*p).는 p->로 바꾸어줄 수 있다.
	result.real = c1->real + c2->real;
	result.imagin = c1->imagin + c2->imagin;
	return &result;
}
//	2. malloc
//	=> free를 잊으면 안된다.
struct Complex* add2(const struct Complex* c1, const struct Complex* c2) {
	struct Complex* result = (struct Complex*)malloc(sizeof(struct Complex));
	result->real = c1->real + c2->real;
	result->imagin = c1->imagin + c2->imagin;
	return result;
}

//	3.	out parameter
//	=>	
void add3(const struct Complex* c1, const struct Complex* c2, struct Complex* result) {
	struct Complex* result = (struct Complex*)malloc(sizeof(struct Complex));
	result->real = c1->real + c2->real;
	result->imagin = c1->imagin + c2->imagin;
	return result;
}
int main() {
	//struct Complex a = { 1,1 };				   이런 방법은 순차적으로 들어가야하지만
	//struct Complex b = { 2,2 };
	struct Complex a = { .real = 1,.imagin = 1 };//이런 방법은 순차적일 필요 없이 멤버를 지정해서 대입할 수 있다.
	struct Complex b = { .real = 2,.imagin = 2 };
	printf("%llu\n", sizeof(a));
	struct Complex r = add(&a,&b);
	printf("resuls : %lf %lf\n", r.real, r.imagin);
	return 0;
}