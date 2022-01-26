struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
//	1. call by value는 인자의 값을 변경하지 않겠다는 약속.
//		그런데 문제는 호출할때마다 복사본을 만드므로 메모리 오버헤드가 존재한다.
//		그러면 &참조로 받으면 메모리 오버헤드는 없다.
//		다만 값이 변경가능하게 된다.
//	2. const reference를 사용하면 복사본 없이 인자의 값을 변경하지 않겠다고 약속할 수 있다.
// 
//void foo(Rect r) {
void foo(const Rect& r) {

}

int main() {
	Rect r = { 1,1,10,10 };
	foo(r);	// 조건 : foo는 절대로 r의 상태를 변경하면 안된다.
}

//다음 중 좋은 코드는?
//1번이 좋다. int는 그렇게 크지 않다. 또한 &는 내부적으로 포인터 연산을 한다. 또한 1번이 최적화하기에 좋다.
//
void foo(int n) {}			//1. 좋은 코드
void foo(const int& n) {}	//2. 좋지 않다.

// 함수 인자를 받는 방법
//	1.	인자값을 변경하려면
//		-> 포인터도 좋고, reference도 좋다.
//		요즘은 "레퍼런스가 좀 더 널리 사용"
//		swap(int *, int *)
//		swap(int&, int&)
// 
// 2.	인자값을 변경하지 않겠다면..
// A. primitive type  : call by value		void foo(int n)			즉 일반 int와 같은 타입이면 call by value로 하고
// B. user define type: const reference		void foo(const Rect& r)	struct와 같이 유저 지정 타입이면 const reference로 해라
// 
//