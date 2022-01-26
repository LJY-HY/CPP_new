#include <stdio.h>

// stdin
// stdout	=> FILE*입니다.
// stderr
//	1.	fopen("파일경로","모드")
//		"r" : 읽기모드
//			=>경로에 파일 없으면 실패
//		"w" : 쓰기
//			=>경로에 없으면 만들어줌
//				경로에 있으면 파일 크기를 0으로 해서 변경하여 열어줌
// 
//	2. fprintf(FILE*,format,...)
//	3.	파일은 자원이기 때문에 반드시 flose를 통해 닫아주어야 한다.
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