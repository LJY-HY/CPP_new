#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//	��ũ�ι���
//	=>#, ##
//	# : ���޵� ��ū�� ���ڿ��� ����
//	��ũ�ΰ� �ƴϸ� ����. ��ó���⿡���� �� �� ����
#define print_value(x) \
printf("%s\n",#x)
#define MAX 256
#define TOSTR(x) #x
#define _TOSTR(x) TOSTR(x)
int main() {
	int value1 = 10;
	int value2 = 20;
	print_value(10);
	printf("%s\n", TOSTR(MAX));	// ���ڿ��� �����ϴ� ��ũ�δ� ��ũ�� ����� ���� ġȯ�� ����� ������� �ʽ��ϴ�.
								// ��ũ�� ����� ����� ġȯ�ǵ��� �ϱ� ���ؼ� �������� �����˴ϴ�.

}