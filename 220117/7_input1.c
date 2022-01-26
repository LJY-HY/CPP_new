#include <stdio.h>	

int main() {
	int a = 0;
	int b = 0;
	int ret = scanf("%d %d", &a, &b);		//과연 이게 입력이 잘 되었을까?
	printf("%d %d\n", a, b);
	printf("%d\n", ret);					//-1인경우 입력이 없을 경우, 그 외의 경우에는 입력받은 인자 개수 ret
	
	return 0;
}