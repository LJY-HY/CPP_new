#include <iostream>
#include <string>

class Person {
	std::string name;
	int age;
public:
	//	멤버 초기화 리스트 : 생성자 ()뒤에 :을 적고 초기화 하는 것
	Person(const std::string& n, int a) : name(n),age(a)		//	초기화 코드
	{
	/*	name = n;
		age = a;*/	// 대입코드
		//이 부분은 제어문 같은 코드 쓰는데 써라.
	}
};

int main() {
	Person p("lee", 20);

	//초기화vs대입
	//	1.	primitive type이면 "거의 속도는 동일하다."
	int n1 = 10;	//초기화
	int n2;
	n2 = 10;		//대입

	//	2.	user define type
	std::string s1("lee");		//생성자 1회 호출로 초기화되는 코드
								//string(const char*) 생성자 호출
	std::string s2;				//인자 없는 생성자 호출
	s2 = "lee";					//s2.operator=("lee")라는 함수 호출(대입연산자)
}