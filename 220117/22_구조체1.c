#include <stdio.h>
//	���Ҽ� 2���� ���� ���ϴ� �Լ��� ������
//	=>�Լ��� �ϳ��� ���� ��ȯ�ϴ� ���� �����ϴ�.
// 
//	1. out parameter
//	: ����� �Լ� ���ڸ� ���� �޾ƿɴϴ�.
//	=>�ּҸ� �����ؾ��Ѵ�.
//
//
#if 0
void add(double ar, double ai, double br, double bi,double* sr, double* si) {
	*sr = ar + br;
	*si = ai + bi;
}
#endif

//	2.	����ü
//	=>����� ������ Ÿ���� ����� ����
//	=>build-int type / primitive type
//		�⺻������ �����ϴ� Ÿ��
//	=>���Ҽ��� ��Ÿ���� ���ؼ� �ʿ��� �����ͤѤ��� ����ü�� ���� �� �ֽ��ϴ�.
// 
//	3. ����ü Ÿ���� ũ��
//	=>sizeof
//
//	4. ����ü�� call by value�� �����մϴ�.
//	=>���ڷ� ���޵� ����ü�� ���ؼ� ���簡 ����˴ϴ�.
//	=>����ü�� ũ�Ⱑ ũ�� �����ؿ��� ���� �ʹ� ����.
//	=>value��ſ� �ּҸ� ����������(call by reference)
// 
//	5. struct Complex c;
//		c.imagin
//		c.real
//	   struct Complex* c;
//		(*c).imagin	/	c->imagin
//		(*c).real	/	c->real	
//
struct Complex {
	// ����ü�� �̸��� ���� �� ��Ģ�� �ִ°� ����. �ϰ���
	//[[real:8byte][imagin:8byte]]
	double real;		// ��� ����/ ��� ������		.�� ���� ������ �� �ִ�.
	double imagin;
	int arr[100];
};

//	1. static �޸��� �ּҸ� ��ȯ
//		-> ������ ������ ����ؾ��Ѵ�.
struct Complex add1(const struct Complex* c1, const struct Complex* c2) {
	static struct Complex result;
	//result.real = (*c1).real + (*c2).real;		// .real�� ���� ���յǹǷ� ()�� ���� �����־���Ѵ�.
	//���� �ʹ� ���ŷӴ�. (*p).�� p->�� �ٲپ��� �� �ִ�.
	result.real = c1->real + c2->real;
	result.imagin = c1->imagin + c2->imagin;
	return &result;
}
//	2. malloc
//	=> free�� ������ �ȵȴ�.
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
	//struct Complex a = { 1,1 };				   �̷� ����� ���������� ����������
	//struct Complex b = { 2,2 };
	struct Complex a = { .real = 1,.imagin = 1 };//�̷� ����� �������� �ʿ� ���� ����� �����ؼ� ������ �� �ִ�.
	struct Complex b = { .real = 2,.imagin = 2 };
	printf("%llu\n", sizeof(a));
	struct Complex r = add(&a,&b);
	printf("resuls : %lf %lf\n", r.real, r.imagin);
	return 0;
}