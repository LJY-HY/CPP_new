#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//	1.	strcmp : ���ڿ� ���Լ�
//	2.	strcpy(dest,src)
//		dest : ������ ���ü=>���� ������ �޸𸮿� �����ؾ� �մϴ�.
//		src  : ���� ����
//	3.	strcat(dest,src)
//		dest�ڿ� src�� �̾����ϴ�.
//		���ǻ��� : ����� �޸𸮰� Ȯ���Ǿ� �־�� �մϴ�.
//
char* xstrcpy(char* dst, const char* src) {
	char* p = dst;
	//while (*src) {
	//	*p++ = *src++;
	//}
	while ((*p++ = *src++) != '\0')
		/*Nothing*/;
	*p = '\0';
}
int main() {
	const char* s1 = "hello";
	char str[32] = "hello";
	//���ڿ� ���ͷ��� ���� ���ڿ� �迭�� �ʱ�ȭ�� �� �ֽ��ϴ�.

	//str = "show me the money"; 
	//������ ���� ���ڿ� ������ �����ϴ� ���� �Ұ����ϴ�
	xstrcpy(str, "show me the money");
	//strcat(str, "hello");
	printf("%s\n", str);
	return 0;
} 