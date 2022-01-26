#include <iostream>
#include <algorithm>	//이미 이 안에 swap 존재함

void swap_C(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
// C++버전
namespace utils {
	template<typename T>
	inline void swap_CPP(T& r1, T& r2) {
		T temp = r1;
		r1 = r2;
		r2 = temp;
	}
}


int main() {
	int x = 10, y = 20;
	//swap_C(&x, &y);
	//utils::swap_CPP(x, y);			//C++버전
	std::swap(x, y);
	std::cout << x << std::endl;
	std::cout << y << std::endl;
}