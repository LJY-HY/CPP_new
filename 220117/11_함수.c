#include <stdio.h>
//	함수의 목적 함수를 사실 쓰지 않을 때가 더 실행이 빠르다
//		: 입력값을 받아서 주어진 연산을 수행한 후 결과를 반환하는 코드의 집합
//		- 모든 함수는 결과가 있어야 한다->이는 C에서 큰 제약사항은 아니다.
//		1)재사용성
//		2)코드를 구조적으로 관리할 수 있다.
//		3)[가독성]코드를 이해하기 쉽게 만들어준다. 즉 일일히 모든 코드를 보지 않고도 함수를 읽고 추상적으로 어떤 행동을 하고 있
//		  는지 알 수 있게 해준다.
//		
//

#if 0
반환값타입 함수이름(함수인자열)
{
	함수 구현
	return 반환값
}
#endif
//int sub(int a, int b) { return a + b; }		//선언과 정의를 동시에 하는 방법
int sub(int a, int b);							//선언과 정의를 따로 하는 방법	//함수의 순서에 상관없이 사용하기 위해서이다.
												//따로 하는 것이 좋다. 그러면 함수 선언의 순서에 상관없어지기 때문
int main() {
}
int sub(int a, int b) {
	return a - b;
}