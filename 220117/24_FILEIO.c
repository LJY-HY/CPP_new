#include <stdio.h>
//표준입출력장치
//stdout => 표준출력장치파일(모니터)
//stdin	 => 표준입력장치파일(키보드)
//stderr => 표준에러장치파일(모니터)
// 
// stdout/stderr의 차이?
//	=>버퍼링의 정책이 다르다
//	=>표준 출력할 때 user/kernel model간 switch가 일어나는게 overhead가 크다
//	stdout=>Line 버퍼링
//			'\n'가 있어야 출력됩니다.
//	stderr=>버퍼링을 하지 않는다.
//			이는 err가 발생할때마다 바로바로 출력을 해주기 때문에 err를 찾기 쉽다.
//			다만 stdout은 버퍼링때문에 어느 부분에서 err가 발생했는지 알 수 없다.
//
int main() {
#if 0
	int num;
	//scanf("%d", &num);
	fscanf(stdin, "%d", &num);

	printf("num:%d\n", num);
	//printf("Hell\n");
	fprintf(stdout, "Hell\n");
#endif
	fprintf(stdout, "hello");		//지금 \n이 없어서 버퍼에 들어가고 while이 돌아가버려서 원래는 안나옴
	while (1);
	return 0;
}