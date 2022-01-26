#include <stdio.h>
#include <stdlib.h>
//	1. 동적 메모리 할당
//		malloc / free
//	2.동적 메모리 할당의 결과는 포인터가 반환
//	3.실패할 경우 NULL이 반환
//	4.수명관리를 프로그래머가 직접 할 수 있다.
//	5.메모리 해지를 않을 경우, 메모리 누수가 생기고 이후에 문제의 원인이 될 수 있다.
//	  이것이 문제인 이유는 문제가 바로 나타나지 않기 때문이다.
//	6.malloc은 메모리 할당중에 가장 많은 시간이 소모됩니다.
//		메모리량이 상당히 minimal한 프로젝트라면 malloc은 상당한 이슈가 될 수 있다.
//		malloc을 아예 쓰지 말라고 하는 경우도 있음.
//		다만 느리기는 하지만 그래도 대부분 쓰기는 함.
//	*logging : 화면에 출력하면 지나가면 볼 수 없음. 그래서 이를 파일을 통해 history를 보는 방법.
//	
// 
//
int* foo() {
	int score[5] = { 1,2,3,4,5 };	
	return score;		
}
//	해지된 메모리의 주소를 반환한다.
//	=>지역변수의 주소를 반환하면 안된다.
//	1. 정적지역변수 
//		=>정적영역은 thread가 공유하는 공간이다.=>thread에 안전하지 않다.
//		=>함수가 전역변수 또는 정적지역변수에 의존하는 경우 함수는 재진입이 불가능하다
//		: 스레드 안정성, 재귀가 불가능
int* goo() {
	static int score[5] = { 1,2,3,4,5 };
	return score;
}
//	2. 동적 메모리 할당
//	=>스레드에도 안전하고 '재진입'(reentrant)이 가능하다.
//	: 사용자가 반드시 free해주어야 하는 것을 기억해야 한다. free가 누락되기 쉽다.
//	보통 malloc한 곳에서 free가 되면 관리가 쉬운데 아래의 경우는 어려울 수 있다.
int* hoo() {
	// int[5]를 사용하겠다는 의도
	int* score = (int*)malloc(sizeof(int) * 5);
	return score;
}


int main() {
	//int* p = (int*)malloc(sizeof(int));
	// __FILE__/__LINE__
	// __func__
	int* p = NULL;

	// 미리 정의된 매크로를 제공한다.
	if (p == NULL) {
		printf("메모리 할당 실패\n%s:%d-%s\n",__FILE__,__LINE__,__func__);
		exit(1);			//프로그램을 명시적으로 종료
	}
	return 0;
}