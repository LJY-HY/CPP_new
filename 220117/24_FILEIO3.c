#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
//	1.	errno
//	=> 표준 함수에서 오류가 발생했을 때, 전역변수 errno가 0이 아닌 값으로 변경된다.
// 
//	2.	strerror함수
//	=> strerror함수를 통해 errno가 어떤 의미인지 문자열 얻을 수 있다.
// 
//	3.	perror
//	=> errno/strerror를 하나의 함수로 처리하여 제공한다.
// 
//	char *strerror(int errnum);
// 
//	4.	파일로부터 데이터를 읽을 때, 
//	=> Ctrl+D / Ctrl + Z : EOF(End of File)	키보드라는 file의 끝이다.
// 
//	5.	fgets : 라인을 입력받습니다.				//단어단위보다는 line단위로 읽고싶은경우
//	char* fgets(char* str,int size,FILE*stream
//

int main() {
	FILE* fp = fopen("a2.txt", "r");
	//if (fp == NULL) {
	///*	char* reason = strerror(errno);
	//	fprintf(stderr, "fopen실패-%s\n", reason);*/
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