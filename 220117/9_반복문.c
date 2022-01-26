# include <stdio.h>
//	1.	while	
//		break 		: 반복문을 빠져나옴
//		continue	: 다음 조건으로 반복문을 수행하는 키워드
//	조건을 줄여쓰는 것이 좋은 코딩 방법이다.
//	리팩토링
//		코드의 유지/보수성을 떨어뜨리는것 : smell
//		이 smell을 정의하고 코드의 기능을 바꾸지 않고 좋게 바꾸는것
//		이때 중요한것은 test. 이전과 동일하게 동작한다는 것을 검증할 수 있는 장치가 필요하다.=>자동화(lifecycle management)
//		
//	그렇다고 모든 중복을 없애야 하는가? 얘를 묶었을 때 일반화가 가능한가? 아닐수도 있다.
//	지금은 중복일 수 있지만 나중에는 아닐 수 있다. 그래서 오히려 중복을 없애면 유지/보수가 오히려 더 어려워질 수 있다.
//	
//	*오픈소스를 사용했을 때 문제점
//		-버그가 있을 수 있음. 그로 인한 문제 발생 시 책임은 오픈소스에 있지 않음.
//	
#if 0
int main() {
	int i = 0;
	while (i<10)
	{
		printf("%d\n", i);
		i++;
	}
}
#endif
//	반복문-중첩이 가능
//		2중 중첩위주로 많이 사용한다.
//
int main() {
	int i = 0;
	int j = 0;
	while (i <= 10) {
		j = 1;
		while (j <= i) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}