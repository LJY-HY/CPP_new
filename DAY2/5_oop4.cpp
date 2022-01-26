#include <iostream>
//	
//	
//	
struct Rect {
	//	멤버 데이터(다른 언어는 필드(field)라고도 한다.)
	int left;
	int top;
	int right;
	int bottom;

	//	멤버 함수(메소드(method)라고도 한다.)
	int getArea() {	// 컴파일되면 int getArea(Rect* this)
		return (right - left) * (top - bottom);		//this->right - this->left 로 바뀜
	}
	//	결론 : 모든 멤버함수는 컴파일되면 인자로 Rect* 가 추가되는 원리입니다.
	void draw() {	// void drat(Rect* this)	Python의 경우는 self를 넣어준다.
		std::cout << "draw rect" << std::endl;
	}
};
int main() {
	Rect rc1 = { 1,1,10,10 };						
	Rect rc2 = { 2,2,5,5 };
	rc1.getArea();	//	C++컴파일러가 객체를 함수 인자처럼 전달해 준다.
					//	getArea(&rc1)
}