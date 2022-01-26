#include <stdio.h>

//	1.	문자열은 char배열로 표현된다
//	2.	%s를 통해 문자열을 출력할 수 있다.
//	3.	C언어의 모든 문자열은 반드시 '\0'가 마지막에 존재한다.
//		=>문자열의 길이는 배열임에도 불구하고 길이를 전달해줄 필요가 없다.
//		=>문자열은 반드시 '\0'로 끝나는 것이지만 문자 배열은 굳이 안그래도 된다.
//		
// "" : 문자열
// '' : 문자
//
void print_str(char* str) {
	while (*str) {//이렇게 더 많이 쓴다.
		printf("%c", *str++);
	}
	//while (*str != '\0') {
	//	printf("%c", *str);
	//	str++;				//어차피 1byte임
	//}
}
int main() {
	//char str[] = { 'A','B','C','\0'};
	char str[] = "ABC";		//읽기 쓰기 가능
	char* str2[] = "ABC";	//오직 읽기만 가능
	str[1] = 'X';	//OK
	str[1] = 'X';	//error : 수정 불가능한 문자열을 수정했습니다.=>지금 이거 compile단계에서는 에러 안뜨고 runtime때 뜸

	const char* str3 = 'ABC';
	//char * const str3와는 다르다. 이거는 char형 포인터가 가리키는 대상을 const로 변경
	//const char* str3는 str3가 가리키는 문자열을 const화
	//그럼 둘 다 const화하려면
	//const char* const str3="ABC"
	str3[1] = 'X';	//지금 바로 error가 뜬다.
	printf("%s\n", str);	
	print_str(str);
}