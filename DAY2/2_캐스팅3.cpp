#include <iostream>
//
//	2.	reinterpret_cast
//		1)	서로 다른 타입의 주소 캐스팅
//		2)	정수<=>주소 사이의 캐스팅
int main() {
	int n = 10;
	//double* p1 = static_cast<double*>(&n);		//  error
	double* p1 = reinterpret_cast<double*>(&n);		//  OK. 의도가 있다는 것을 의미.
	*p1 = 3.14;										//	그럼에도 불구하고 이렇게는 쓰지 마라....
	int* p2 = 1000;									//	ERROR(p2에 1000번지 주소를 넣을게)
	int* p2 = (int*)1000;							//	OK
	int* p2 = static_cast<int*>(1000);				//	Compile ERROR. 정수 자체를 주소값으로 넣는 경우는 위험하지 않을까? ERROR!
	int* p2 = reinterpret_cast<int*>(1000);			//	그럼에도 불구하고 정수 자체를 주소값으로 넣고 싶은 '의도'가 있어! OK

	int n2=reinterpret_cast<int>(3.4)				//	ERROR. 용도에 맞지 않다. static_cast를 사용하거나 캐스팅 자체를 제거하면 된다.
													//	reinterpret cast의 용도는 오로지 '주소'를 캐스팅할때.....
}