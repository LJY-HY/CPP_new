#include <stdio.h>
#if 0
int main() {
	int c1 = 10;		//����
	const int c2 = 20;	//��� :1. �ݵ�� �ʱⰪ �����ؾ��Ѵ�. 2. �� �����ϴ� ���� �Ұ����ϴ�.
	int const c3 = 10;
	//c2�� c3�� ������ ����̴�. �� type�� ��/�� �� �ٿ� �� �� �ִ�.
	//c2 = 10;
	//c3 = 30;

}
#endif
#if 0
int main() {
	int n = 0;
	int* p = &n;
	const int* p2 = &n;//p2�� �����͸� ���ؼ� ���ü n�� ���� �������� �ʰڴ�.

	const n2 = 3;
	//	int*=>const int�� ���� ������ �ƴϴ�
	//int* p3 = &n2;		//C������ warning�� ������ C++������ error�߻�. ��� warning�� error�� ���� ���� ����.
	const int* p4 = &n2;


}
#endif
typedef int* PINT;
typedef const PINT WHERE_CONST;		//��� const int*�� �ƴ� 
int main() {
	int n = 10;
	//	*�� �߽����� �������
	//	�� : ����Ű�� ���ü(n)�� ��� ����ϰڴ�.
	//	�� : ������ ������ ��� ����ϰڴ�.
	const int* p1 = &n;				// const int �� ����Ű�� ��ó���� pointer�̴�. �� ���� X
	int const* p2 = &n;				// ���� ����
	int* const p3 = &n;				// int�� ����Ű�� const pointer�̴�. �ٸ� �ָ� �⸮Ű�°� �ȵȴ�.
	const int* const p4 = &n;		// const int�� ����Ű�� const pointer�̴�.
	int const* const p5 = &n;		// ���� ����
}