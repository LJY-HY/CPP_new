#include <stdio.h>
#include <string.h>
//	1.	���ڿ� �񱳸� ���� �ּҸ� ���ϴ� ���� ����� �׻� �ٸ��ϴ�.
//	2.	���ڿ� ���Լ�
//		strcmp : string.h
//		: ���� ���ڿ��̸� 0�� ��ȯ
//		ret==0:���� ���ڿ�
//		ret<0 : ���������� �տ� �����Ѵ�.
//		ret>0 : ���������� �ڿ� �����Ѵ�.
//
int main() {
	//char s1[] = "hello";	//h,e,l,l,o,nuull
	//char s2[] = "hello";
	//if (s1 == s2) {
	//	//�̰Ŵ� ���ڿ��� �����ּҸ� ���ϴ� ���̴�.
	//	printf("���� ���ڿ�\n");
	//}
	const char* s1[] = "Hello";
	const char* s2[] = "Hello";
	if (strcmp(s1, s2) == 0){
		printf("���� ���ڿ�\n");
	}
	//if (s1 == s2) {
	//	printf("���� ���ڿ�\n");//�̰Ŵ� ��
	//}
}