#include <stdio.h>
//	조건문/반복문
//	=>제어문(Control Statement)
//	=>실행의 흐름을 조건에 따라 변경하고자 할때 사용
// 
//	C언어에서 true : Non-zero	// false : zero
//	원래 c에서 bool타입이 없었다. 다만 c99에서 도입됨. 이는 다른사람이 쓰면 쓰고 안쓰면 쓰지마라
// 
//	제어구문에서 한개의 동작만 수행할 경우, 블록을 생략할 수 있다. 하지만 블록을 쓰는게 좋은 습관이다.
//	또한 if (조건)처럼 if와 (조건)사이에 띄어 써주는것이 좋다.(convention)
// 
//	논리연산자
//	&&,||
//	주의사항 : short circuit(단일 회로의 성질을 갖는다)
//		&&는 앞의 조건식이 거짓이면, 전체 결과는 거짓
//		||는 앞의 조건이 참이면 전체 결과는 참
//			=>뒤의 조건식은 수행되지 않는다.
//			=>C언어뿐만 아니라 다른 언어들도 공통적으로 가지고 있는 특성이다.
//
# if 0
int main() {
	int a = 10;
	int b = 10;
	if (a == 15 && ++b == 11) {
		printf("true\n");
	}
	else {
		printf("false\n");
	}
	printf("%d %d\n", a, b);
	return 0;
	
}
#endif
//	switch문에서 
//	fall through : 특정 라벨로 점프해서 밑의 구문을 계속 수행합니다.
//	만약 case끼리 배타적으로 동작시키고 싶으면 fall through의 특성을 없애기 위해선 break를 해줘야 한다.
//

int main() {
	int a = 0;
	scanf("%d", &a);
	switch (n) {
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
	default:
		printf("rest\n");
	}
}