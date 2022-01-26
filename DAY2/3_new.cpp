#include <iostream>
#include <cstdlib>			// malloc을 위해. VC는 없어도 되긴 함.
int main() {
	// C스타일의 동적 메모리 할당
	int* p1 = (int*)malloc(sizeof(int) * 10);

	// C++스타일의 동적 메모리 할당
	int* p2 = new int;					//new 타입
	delete p2;

	int* p3 = new int[10];				//배열 모양 할당은
	delete[] p3;						//"delete[]"로 제거합니다.
}
//					정체					반환타입					인자					핵심
//	malloc			함수					void*					크기					생성자 호출안됨
//										캐스팅 필요.
//	new				키워드(연산자)		정확한 타입				타입					생성자 호출됨

//	다른 언어에서도 다들 new를 많이 쓴다.
//	다만 c=CAR		// Car.__new__()
//					   Car.__init__()