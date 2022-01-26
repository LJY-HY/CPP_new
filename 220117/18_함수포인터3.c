#include <stdio.h>
typedef int(*PARR)[5];		//int[5]를 가리키는 배열 포인터 PARR
int x[3][5] = { 0, };
int(*foo())[5]{
	//	1) foo()
	//	:foo는 인자가 없는 함수임
	//	2) *foo()
	//	:함수의 반환 타입은 포인터임
	//	3)(*foo())[5]
	//	:5개짜리 배열을 가르키는 포인터입니다.
	//	4)int (*foo())[5]
	//	:배열의 원소타입은 int입니다.
	return x;	//p--->int[5]		int (*p)[5]
}
typedef int (*FP)(int, int);
typedef FP* FPP1;				// int (int,int)함수를 가리키는 포인터를 반환하는 함수 FPP1
int add(int a, int b) { return a + b; }
int (*goo())(int,int) {
	return &add;		//반환 타입은 포인터, 포인터가 가르키는 타입은 int (int,int)형 타입 함수
}

FPP1 hoo() {
	return &goo;
}
//int (*(*hoo())())(int, int) {
//	return &goo;		//	int (*())(int,int)
//}
int main() {

	return 0;
}