#include <stdio.h>

//	�Լ��� ������ ��򰡿� �����Ѵٴ� ����� �����Ϸ����� �˷���=>����
#include "calc.h"		// include guard���䵵 �����Ұ�

// Ctrl + F7 : Compile�� ��
// Ctrl + F5 : Compile + Linking => a.exe�� �ȸ������  Linking ������ �߻�

// Compile : ���� ������ ����
int main(){
	int a = 3;
	int b = 5;
	int result1 = add(a, b);
	int result2 = sub(a, b);
	printf("%d %d\n", result1, result2);
	return 0;
}