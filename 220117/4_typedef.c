#include <stdio.h>
//	1.	typedef�� ���� Ÿ�Կ� ���ο� ������ �ο��� �� �ֽ��ϴ�.
//		=>type aliasing
// 
//	int - 4����Ʈ
//	char- 1����Ʈ
//	short-2����Ʈ
//	long- 4����Ʈ/8����Ʈ
# if 0
typedef int int32;
typedef char int8;
typedef short int16;
typedef long long int64;

#include <stdint.h>		//���� typedef�� ��� �����ص� header������ �����Ѵ�.

int main() {
	// int8_t / int16_t / int32_t / int64_t
	int8_t c2;
	int32 n = 10;		// int n
	int8 c = 100;			// char c
	printf("%d %d\n", n, c);
}
#endif
//	2.	������ Ÿ�� ǥ������ typedef�� ���ؼ� �����ϰ� ǥ���� ����
//		�迭�� ��ȣ�� '�ݵ�� �ɺ� ��'�� �;��Ѵ�. �̸� typedef�� ���� ���������� �ٲ� �� �ִ�.
//
typedef int ARR[10];
// typedef int[10]�� ARR�� ǥ���ϰڴ�.
int main() {
	int n;			// intŸ��
	int arr[10];	// int[10]Ÿ��
	ARR arr2;
}
