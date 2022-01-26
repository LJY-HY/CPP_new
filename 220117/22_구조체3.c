#include <stdio.h>
//
//	C������ typedef�� �̿��Ͽ� COMPLEX�� COMPLEX�� �ٲ� �� �ִ�.
typedef struct Complex {
	// ����ü�� �̸��� ���� �� ��Ģ�� �ִ°� ����. �ϰ���
	//[[real:8byte][imagin:8byte]]
	double real;		// ��� ����/ ��� ������		.�� ���� ������ �� �ִ�.
	double imagin;
	int arr[100];
} COMPLEX;

//	1. static �޸��� �ּҸ� ��ȯ
//		-> ������ ������ ����ؾ��Ѵ�.
COMPLEX add1(const COMPLEX* c1, const COMPLEX* c2) {
	static COMPLEX result;
	//result.real = (*c1).real + (*c2).real;		// .real�� ���� ���յǹǷ� ()�� ���� �����־���Ѵ�.
	//���� �ʹ� ���ŷӴ�. (*p).�� p->�� �ٲپ��� �� �ִ�.
	result.real = c1->real + c2->real;
	result.imagin = c1->imagin + c2->imagin;
	return &result;
}
//	2. malloc
//	=> free�� ������ �ȵȴ�.
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
	//COMPLEX a = { 1,1 };				   �̷� ����� ���������� ����������
	//COMPLEX b = { 2,2 };
	COMPLEX a = { .real = 1,.imagin = 1 };//�̷� ����� �������� �ʿ� ���� ����� �����ؼ� ������ �� �ִ�.
	COMPLEX b = { .real = 2,.imagin = 2 };
	printf("%llu\n", sizeof(a));
	COMPLEX r = add(&a, &b);
	printf("resuls : %lf %lf\n", r.real, r.imagin);
	return 0;
}