
class Point {
	int x = 0;
	int y = 0;		// C++11부터 이 코드가 허용됩니다. 필드 초기화
public:
	Point()							{}
	Point(int a)		: x(a)		{}
	Point(int a, int b) : x(a),y(b) {}
};
//	위처럼 만들면 컴파일러가 아래처럼 변경하는 원리
class Point {
	//사실 여기는 구조체 모양 잡는 곳이다.
	//
	int x;// = 0;
	int y;// = 0;
public:
	//컴파일러가 아래처럼 변경
	Point()				: x(0),y(0) {}
	Point(int a)		: x(a),y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};

int main() {
	Point p(1);	//x=1,y=0
}