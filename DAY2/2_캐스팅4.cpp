int main() {
	const int c = 10;

	int* p1 = &c;							//	error
	int* p2 = (int*)&c;						//	ok
	int* p3 = static_cast<int*>&c;			//	error
	int* p4 = reinterpret_cast<int*>(&c);	//	error
	int* p5 = const_cast<int*>(&c);			//	ok
											//	상수성 제거를 위한 캐스팅
}

//	결론 : 용도에 맞게 캐스팅을 사용하자.
//	그런데, 안전한 코드를 위해서는 static_cast만 사용하자.
//	그런데, 임베디드 분야는 "reinterpret cast"가 필요하긴하다.

//	결론은 안전하게 하려면 static_cast를 써라.
//	만약 에러가 난다면 만약 의도가 있다면 다른 적절한 cast를 써라.
//	그렇지 않다면 고쳐라.