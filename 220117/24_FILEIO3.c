#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
//	1.	errno
//	=> ǥ�� �Լ����� ������ �߻����� ��, �������� errno�� 0�� �ƴ� ������ ����ȴ�.
// 
//	2.	strerror�Լ�
//	=> strerror�Լ��� ���� errno�� � �ǹ����� ���ڿ� ���� �� �ִ�.
// 
//	3.	perror
//	=> errno/strerror�� �ϳ��� �Լ��� ó���Ͽ� �����Ѵ�.
// 
//	char *strerror(int errnum);
// 
//	4.	���Ϸκ��� �����͸� ���� ��, 
//	=> Ctrl+D / Ctrl + Z : EOF(End of File)	Ű������ file�� ���̴�.
// 
//	5.	fgets : ������ �Է¹޽��ϴ�.				//�ܾ�������ٴ� line������ �а�������
//	char* fgets(char* str,int size,FILE*stream
//

int main() {
	FILE* fp = fopen("a2.txt", "r");
	//if (fp == NULL) {
	///*	char* reason = strerror(errno);
	//	fprintf(stderr, "fopen����-%s\n", reason);*/
	//	perror("fopen");
	//	return 1;
	//}

	FILE* out = fopen("out.c", "w");
	if (out == NULL) {
		perror("fopen");
		return 1;
	}
	char buf[64] = { 0, };
	while (1) {
		char* s = fgets(buf, sizeof buf, fp);
		if (s == NULL)
			break;
		printf("%s",buf);
	}

	fclose(out);
	fclose(fp);
}