#include <stdio.h>
//	구조체 크기
//	1. 멤버 데이터 변수의 배치 위치에 따라서 결과가 달라집니다.
//	2. 구조체 패딩을 없애기 위해서는 컴파일러가 제공하는 지시어를 통해서 패딩을 제거할 수 있습니다.
//		=>Visual C++의 경우 pragma pack
//
#pragma pack(push,1)
struct A {
	char a;
	double c;
	int b;
};
#pragma pack(pop)	// 이러면 13byte 크기의 구조체가 된다.

struct B
{
	char a;
	int b;
	double c;
};

int main() {
	printf("%ld\n", sizeof(struct A));
	printf("%ld\n", sizeof(struct B));
	return 0;
}