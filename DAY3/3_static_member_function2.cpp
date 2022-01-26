
class Test {
	int idata;
	static int sdata;
public:
	//	다음 중 에러를 모두 고르세요
	//	static 멤버 데이터	: 객체가 없어도 메모리에 있다.(전역변수와 유사)
	//	static 멤버 함수		: 객체 없이 호출 가능
	void f1() {		// 이 함수를 호출했다는 것은 객체가 있다는 의미. 애초에 호출당시 객체가 있다는것. t.f1()형식으로 불렀을 것이므로....
		idata = 10;	//1		ok		
		sdata = 10;	//2		ok
		f2();		//3		ok
	}
	// 핵심 : static 멤버 함수에서는 static 멤버(데이터,함수)만 접근가능합니다.
	static void f2() {
		idata = 10;	//4		error
		sdata = 10;	//5		ok		sdata는 객체가 없어도 메모리에 있다.
		f1();		//6		error
	}
};
int Test::sdata = 0;
int main() {
	Test::f2();
	Test t;
	t.f2();			//  위에 객체를 만들었는데도 idata/f1()은 접근 불가능한가??
					//	불가능함. 그냥 그렇게 만듬.
}