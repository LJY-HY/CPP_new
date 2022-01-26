#include <stdio.h>
# if 0
//	배열 : 동일한 타입의 여러 개의 메모리를 연속적으로 할당
//	-	하나의 이름과 하나의 인덱스를 통해 해당 메모리에 접근이 가능합니다.
//	
//	배열의 초기화 : 할당하면서 바로 값을 집어넣는 것
//		-만약 할당된 크기에 넘어서서 값을 넣으면 warning이 뜬다.
//		보안을 위해서는 배열의 크기를 항상 체크하면서 배열을 사용해야한다.
//		-만약 할당된 크기보다 적게 넣으면 남는 공간에는 0으로 초기화된다.
//		-int arr[5]={0,} //배열 전체를 0으로 초기화하고 싶은 경우
// 
//	다차원 배열
//
int main() {
	int score[3][5];	//score는 엄밀히 말하면 3개짜리 array이다.
	//[int[5]] [int[5]] [int[5]]
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d번째 %d과목\n", i + 1, j + 1);
		}
	}
}

//	C89 : 배열의 크기는 반드시 컴파일 시간에 결정되어야 한다.
//			scanf등을 통해 런타임동안 결정되는경우 되지 않는다.
//	C89처럼 안되는 경우가 존재하므로 이식성이 떨어지므로 arr[n]과 같은건 쓰지 않는 것이 좋다.
//
int main() {
	int n;
	scanf("%d", &n);
	int arr[n];		//배열의 크기가 런타임에 결정된다. C99에서는 가능하다
	int arr[10];	//배열의 크기가 컴파일타임에 결정된다.
}
//
//	배열의 크기를 알아내는방법
//	-sizeof(arr)/sizeof(int)
//	-sizeof(arr)/sizeof(arr[0])		이 방법이 더 좋다. arr의 타입이 바뀌어도 수정해줄 필요가 없기 때문
//
#endif
//	1.	배열의 이름은 "배열의 첫번째 원소의 시작 주소"로 해석됩니다.
//		=>"Decay"
//	2.	Decay예외
//		1) sizeof
//		2) &
//
int main() {
	int score[3][5];	//score는 엄밀히 말하면 3개짜리 array이다.
	int score2[3] = { 0, };
	printf("%lu\n", sizeof(&score[0]));	//이거는 배열 주소의 크기가 나옴
	printf("%lu\n", sizeof(score));		//이거는 배열 원소의 개수가 나옴
	printf("%p\n", &score);
	printf("%p\n", &score[0]);
	printf("%p\n", score);
	printf("%d\n", sizeof(score2));
}