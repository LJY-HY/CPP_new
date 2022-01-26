#include <stdio.h>
//	함수의 인자전달방식
//	1.	인자값을 복사해서 전달한다.
//		인자의 값의 다른 함수를 통해서 변경하는 것이 불가능
//		=>Call by Value
//
//
#if 0
void inc(int x) {
	x = x + 1;
}
int main() {
	int n = 10;
	inc(n);
	inc(n);
	inc(n);
	printf("%d\n", n);
	return 0;
}
#endif

//	2.	값을 전달하는 것이 아니라, 주소값을 전달하면 변수를 참조해서 값을 읽거나 변경할 수 있습니다.
//		=> Call by Reference(pointer)		call by pointer라고 읽는 것이 좋다. C++에선 reference라고 불리는 별도의 문법이 있으므로
//		:인자로 주소를 전달해서 값을 읽거나 변경하는 것이 가능하다.
//	
//	*python이나 java는 기본적으로 참조가 전달되는 언어라서 따로 고려 안해도 된다.
//	그러면 무조건 참조를 전달하는 것이 좋을까?
//		장점 : 다양한 케이스를 그때그때 처리할 수 있다.
//		단점 : 기능이 추가된 것이므로 어렵다, 공부하기....		=>C++
//

void inc(int* x) {
	//*x = *x + 1;
	++(*x);
}
int main() {
	int n = 10;
	inc(&n);
	inc(&n);
	inc(&n);
	printf("%d\n", n);
	return 0;
}