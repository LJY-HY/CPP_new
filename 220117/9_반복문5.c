#include <stdio.h>
//	do-while();
//	:먼저 한번 수행 후, 반복의 조건의 체크
//	먼저 실행하고 그 결과값으로 반복여부 결정할 때 사용
//
# if 0
int main() {
	int n = 0;
	do {
		scanf("%d", &n);
	} while (n > 10);
}
#endif
// for문
// *반개구간 [0,10)을 더 선호한다.
// int count=0 ;count<10
// for문의 동작 순서 기억할 것
// 
// *언제까지 돌아갈지 알 수 없을 때는 while문으로, 언제까지 돌아갈지 알 수 있을 때는 for문으로 구현하는 것이 좋다.
// 둘 모두 1대1대응이 되지만 continue동작에 대해선 다르다.
// for문의 경우 continue를 수행하고 나서도 for문의 세번째 동작은 실행이 된다.
//
int main() {
	int count;
	
}