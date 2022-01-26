#include <iostream>
#include <cstdlib>
//C스타일의 ()캐스팅 : 대부분의 경우 성공한다.
//					  그런데 너무 위험하다.
int main() {
	double d = 3.14;
	int n = d;						//됨 하지만 경고 발생
	//int n = (int)d;					//경고발생하지 않음

	int* p = (int*) malloc(100);	//void*=>int*	:필요한 작업.
	free(p);

	// int*->double* 로 변환 : 너무 위험하다.
	// 그런데 C캐스팅은 허용
	//double* p1 = &n;				//이게 된다면 n의 4byte보다 더 뒤의 4byte까지 읽어버리게 된다. 이건 말이 안됨.
	double* p1 = (double*)&n;		//이거 되기는 하는데 여전히 위험
	//*p1 = 3.4;						//runtime error

	const int c = 10;				//c는 상수.
	//int* p2 = &c;					//못 바꾸는 영역에 있는 애인데 이러한 상수를 비상수를 가리키는 포인터에 담을 수 없다.
	int* p2 = (int*)&c;				//됨.
	*p2 = 20;

	std::cout << c << std::endl;	//이거는 10. 왜 그럴까? 컴파일 단계에서 아예 메모리로부터 읽어오지 않고 바로 10을 써놓을 수 있음. 그게 더 빠르니까.
	//결과는 10/20 둘 중에 무엇일까. 컴파일러에 따라 달라진다.
	std::cout << *p2 << std::endl;	//이거는 20
}