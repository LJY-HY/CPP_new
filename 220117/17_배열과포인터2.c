#include <stdio.h>
//	배열을 함수를 통해 처리하는 방법
//	배열의 모든 요소를 출력하는 함수
//	C언어에서 배열을 처리하는 함수를 설계할 때는 반드시 배열의 길이 정보도 전달받아야 한다.
//	memcpy같은 애들도 copy하는 대상의 길이정보를 인자로 전달받아야한다.
//
//

//void print_array(int arr[5]) { 이렇게 적어놔도 사실 컴파일러는 arr이라는 pointer변수만 전달받는다. 즉 배열의 길이는 얼마나되는지 알 수 없음
void print_array(int *arr, int n){
	// arr의 길이 정보를 모른다.
}

int main() {
	int x[5] = { 1,2,3,4,5 };
	print_array(x,sizeof(x)/sizeof(x[0]));				// 이름을 전달한다는 것은 배열의 첫번째 원소의 시작주소를 전달한다.
	return 0;
}