#include <iostream>

void f(int n) { std::cout << "int" << std::endl; }		//1
void f(void* n) { std::cout << "void*" << std::endl; }	//2
void g(char* n) { std::cout << "char*" << std::endl; }	//3

int main() {
	f(0);			//	1.출력 0은 원래 정수. 다만 nullpointer로 암시적 형변환이 가능할뿐. 그래서 '1'로 된다.
	f((void*)0);	//	2.출력 이거 은근히 많이 쓰일 것 같다.=>define해버리자

#define NULL (void*)0
	f(NULL);
	g(NULL);		//	NULL은 char*가 아닌 void*이다.
					//	void*->char*로의 암시적 형변환이 필요하다.
					//	C언어는 이 암시적 변환 허용
					//	C++은 허용안됨.
					//	그래서 현재는 C++이므로 error.
}