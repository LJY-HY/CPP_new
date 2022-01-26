// 멤버 초기화 리스트가 반드시 필요한 경우
class Test {
	int a;
	int b;
	const int c;			//어? 이거 무조건 초기화가 되어 있어야 하는데?
public:
	Test(int x) : c(x)		//ok. 대입이 아닌 진짜 초기화. 
	{
		//c = x;			// const는 대입이 일어날 수 없음==>compile error
	}
};

int main() {
	Test t(10);
}