#include <iostream>

void f(int n) { std::cout << "int" << std::endl; }		//1
void f(void* n) { std::cout << "void*" << std::endl; }	//2
void g(char* n) { std::cout << "char*" << std::endl; }	//3

int main() {
	// 아래 코드가 현재 대부분의 C++컴파일러가 만들고 있는 모양.
#ifdef __cplusplus
#define NULL 0
#else
#define NULL (void*)0
#endif
	f(NULL);		//위처럼 되어 있으면 다시 1번. 0으로 define해버렸으므로....
					//결국 NULL을 포인터 0으로 사용하고 싶었으나....
					//실패!!
	g(NULL);		//char*라 하더라도 0이 넘어감

	//NULL이 아닌 진짜 포인터 0이 필요했다.
	//그래서 nullptr을 새로 도입
	f(nullptr);
	g(nullptr);
}

// 이 소스의 핵심 : NULL 만드는 법과 문제점