#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//	��ū�� �и��ϴ� �Լ� =>strtok
//	: ���������� �����޸�(��������, ���� ��������)�� ����մϴ�.

int main() {
	char str[] = "hello world show me";
	for (char* p = strtok(str, " "); p != NULL; p = strtok(NULL, " ")) {
		printf("%s\n", p);
	}
	
	//char * p=strtok(str, " ");			// p�� ����. ù" "�� '\0'�� �ٲ�. �� ������ �������� gstr�̶�� ������ ����Ű�� ����
	//printf("%s\n", p);
	//p = strtok(NULL, " ");
	//printf("%s\n", p);
	//p = strtok(NULL, " ");
	//printf("%s\n", p);
	//p = strtok(NULL, " ");
	//printf("%s\n", p);
}