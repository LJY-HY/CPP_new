#include <stdio.h>

int main() {
	long long y[3][2] = { {1,2},{1,2},{1,2}, };
	printf("%d\n", sizeof(y[0][1]));
	printf("%d\n", sizeof(y[0]));
	printf("%d", sizeof(y));
	int (* p2)[2] = y;		//N-1�� �迭�� ����Ű�� ������
	int(* p3)[3][2] = &y;	//N�� �迭 ��θ� ����Ű�� ������
}