#include <stdio.h>
//	������ ���� ũ��
//	=>�ּҸ� �����ϱ� ������ �ּ� Ÿ���� ũ�Ⱑ ���´�
//	=>32-bit�ü�������� 4byte
//	=>64-bit�ü�������� 8byte�� ���´�.
//	=>�̴� ���־�Ʃ����� ������ ���� �ٸ��� ����
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