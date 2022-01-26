#include <iostream>
#include <stdlib>

int main() {
	// 사용자가 입력한 크기(count)만큼 점수를 입력받으려고 한다.
	int count;
	std::cin >> count;

	//int score[count];		// error. 동적메모리 할당을 해야한다(C++은 new)

	//실행시 결정된 크기로 배열은 만드려면 동적 메모리 할당
	int* score = new int[count];
	score[0] = 10;
	delete[] score;//메모리 제거
}