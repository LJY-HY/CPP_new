#include <stdio.h>
//	1.	char 타입이 문자를 표현하는 타입입니다.
//	2.	%c를 통해 printf로 출력
//	3.	변수에 문자를 저장하면 ASCII코드값으로 저장됩니다.
//		'A' : 65
//		'a' : 97
//		'0' : 48
//		영어 외 다국어의 경우, 어떠한 코드 테이블을 쓰느냐에 따라 값이 달라진다.
//	4.	한글(일반적으로)-1byte로는 표현할 수 없음
//		=>euc-kr(CP949) : Windows / MBCS(Multi Byte Character Set)
//		  UTF-16		: Windows
//		  UTF-8(*most)	: Linux, Mac
//		만약 서로 다른 table을 쓰는 경우, 서로 약속을 해놔야한다.
//
//
int main() {
	char c = 'A';
	printf("%c\n", c); //'A'
	printf("%d\n", c); // 65
	return 0;
}