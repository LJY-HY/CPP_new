#include <stdio.h>
//	1.	0�� �����̰�, 0�� �ƴ� ���� �� �Դϴ�.
//	2.	���� ���� 1�� ��µȴ�.
//		������ ���� 0���� ��µ˴ϴ�.
//	3.	||�� ���� ����� ���̸� �ڸ� üũ���� �ʽ��ϴ�.	(short circuitƯ��)
//		&&���� �����̸� �ڸ� üũ���� �ʽ��ϴ�.
//	4.	&&, ||�켱������ �ٸ���(&&>||)
//	5.	�켱������ ������ ������ �ƴ϶�, ������ ������ �����Ѵ�.
//	*���� sequence�ȿ� ������ �����ڰ� �ι� ������ ��� ����� ��� �Ǿ��ϴ����� ���ǵǾ����� �ʴ�. �� compiler�� ���� �ٸ�
//	ex) a = ++b + ++b
//	������ ���� �̴����� �������� ���̴� �ڵ��ϴ� ���� ����.
//	
int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	int r = ++c || ++a && b++;
	printf("%d %d %d %d\n", a, b, c, r);	// 0 0 1 1  ���ո� &&�� ������ ������ ������ �� ���ʺ��� �ȴ�
											// ||�� Ư���� ���� ++c�� 1�� �Ǳ� ������ �� ���� ++a&&b++�� ������ �ʴ´�.
	printf("%d\n", r);
}