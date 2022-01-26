#include <stdio.h>

// stdin
// stdout	=> FILE*�Դϴ�.
// stderr
//	1.	fopen("���ϰ��","���")
//		"r" : �б���
//			=>��ο� ���� ������ ����
//		"w" : ����
//			=>��ο� ������ �������
//				��ο� ������ ���� ũ�⸦ 0���� �ؼ� �����Ͽ� ������
// 
//	2. fprintf(FILE*,format,...)
//	3.	������ �ڿ��̱� ������ �ݵ�� flose�� ���� �ݾ��־�� �Ѵ�.
//
int main() {
	FILE* fp = fopen("a.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "File Open Error\n");
		return 1;
	}
	fprintf(fp, "Hello,world..\n");
	fclose(fp);
	return 0;
}