#include <stdio.h>
void print_array(int (*x)[5],int n) {
	//	int *x[5]의 경우 두가지로 해석가능
	//	1.	x[5]라는 배열이 있는데 각 들어가는 것이 int형 pointer
	//		[int*][int*][int*][int*][int*]
	//		=>포인터 배열
	//	2. int[5]짜리 배열을 가리키는 포인터
	//		[x]----->int[5]
	//		=>배열 포인터
	//
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf("%d", x[i][j]);			// 그냥 이렇게 배열처럼 다루면 된다.=> 더 쉬워짐
		}
		printf("\n");
	}
}
int main() {
	//아래 이차원 배열은 사실 [3]짜리 배열로 보는것이 맞다.
	int x[3][5] = {
		1,2,3,4,5,
		1,2,3,4,5,
		1,2,3,4,5
	};
	print_array(x, sizeof(x)/sizeof(x[0]));
	return 0;
}