#include <stdio.h>
//	����ü ũ��
//	1. ��� ������ ������ ��ġ ��ġ�� ���� ����� �޶����ϴ�.
//	2. ����ü �е��� ���ֱ� ���ؼ��� �����Ϸ��� �����ϴ� ���þ ���ؼ� �е��� ������ �� �ֽ��ϴ�.
//		=>Visual C++�� ��� pragma pack
//
#pragma pack(push,1)
struct A {
	char a;
	double c;
	int b;
};
#pragma pack(pop)	// �̷��� 13byte ũ���� ����ü�� �ȴ�.

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