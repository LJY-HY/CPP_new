#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//	1.	���ڿ� ���� �Լ�
//		=>strlen
// 
//	2.	���ڿ� ���� �Լ�
//		=> ���� �޸� �Ҵ��� ���� ���ڿ��� �����մϴ�.
//		=> strdup
//		=> �ݵ�� free������Ѵ�.
//
int main() {
	char str[32] = "hello";
	printf("%lu\n", sizeof(str));		//�̰� ��� 6�� ���´�. '\0'������
	printf("%lu\n", strlen(str));
	// ���� �޸� �Ҵ��� ���� ���ڿ��� �Ҵ��ϰ� �ʹ�.
	// 1. ���ڿ� ���� +1 ��ŭ�� �޸𸮸� �Ҵ��մϴ�.
	char* p =(char*) malloc(strlen(str) + 1);//6byte�� �޸𸮰� �Ҵ�ȴ�.
	strcpy(p, str);
	printf("%s\n", p);


	//	3. �޸� ����
	free(p);
	return 0;
}