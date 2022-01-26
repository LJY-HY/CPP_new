#include <iostream>

// C++은 용도별로 사용하기 위해 "4개"의 캐스팅이 제공
//	1. static_cast : 논리적으로 맞는 경우만 허용
int main() {
	double d = 3.14;
	//int n = (int)d;
	//	1.	primitive type간의 값 캐스팅 허용
	int n = static_cast<int>(d);				//	원래 casting없이도 되는거니깐 OK

	//	2.	void포인터를 다른타입* 로 캐스팅		//  이건 malloc할땐 꼭 필요한거니깐 OK
	int* p = static_cast<int*>(malloc(100));	
	free(p);

	//	3.	상속관계 타입끼리의 캐스팅 허용
	//	그 외의 경우는 대부분 에러
	//	아래 코드와 같이 서로 연관성 없는 타입의 주소 캐스팅은 모두 에러
	double* p1 = static_cast<double*>(&n);		//  컴파일 에러.
}