#include <stdio.h>
#include <string.h>
//	1.	문자열 비교를 위해 주소를 비교하는 것은 결과가 항상 다릅니다.
//	2.	문자열 비교함수
//		strcmp : string.h
//		: 같은 문자열이면 0을 반환
//		ret==0:같은 문자열
//		ret<0 : 사전적으로 앞에 존재한다.
//		ret>0 : 사전적으로 뒤에 존재한다.
//
int main() {
	//char s1[] = "hello";	//h,e,l,l,o,nuull
	//char s2[] = "hello";
	//if (s1 == s2) {
	//	//이거는 문자열의 시작주소를 비교하는 것이다.
	//	printf("같은 문자열\n");
	//}
	const char* s1[] = "Hello";
	const char* s2[] = "Hello";
	if (strcmp(s1, s2) == 0){
		printf("같은 문자열\n");
	}
	//if (s1 == s2) {
	//	printf("같은 문자열\n");//이거는 참
	//}
}