#include <stdio.h>
typedef int(*PARR)[5];		//int[5]�� ����Ű�� �迭 ������ PARR
int x[3][5] = { 0, };
int(*foo())[5]{
	//	1) foo()
	//	:foo�� ���ڰ� ���� �Լ���
	//	2) *foo()
	//	:�Լ��� ��ȯ Ÿ���� ��������
	//	3)(*foo())[5]
	//	:5��¥�� �迭�� ����Ű�� �������Դϴ�.
	//	4)int (*foo())[5]
	//	:�迭�� ����Ÿ���� int�Դϴ�.
	return x;	//p--->int[5]		int (*p)[5]
}
typedef int (*FP)(int, int);
typedef FP* FPP1;				// int (int,int)�Լ��� ����Ű�� �����͸� ��ȯ�ϴ� �Լ� FPP1
int add(int a, int b) { return a + b; }
int (*goo())(int,int) {
	return &add;		//��ȯ Ÿ���� ������, �����Ͱ� ����Ű�� Ÿ���� int (int,int)�� Ÿ�� �Լ�
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