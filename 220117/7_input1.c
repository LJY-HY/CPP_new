#include <stdio.h>	

int main() {
	int a = 0;
	int b = 0;
	int ret = scanf("%d %d", &a, &b);		//���� �̰� �Է��� �� �Ǿ�����?
	printf("%d %d\n", a, b);
	printf("%d\n", ret);					//-1�ΰ�� �Է��� ���� ���, �� ���� ��쿡�� �Է¹��� ���� ���� ret
	
	return 0;
}