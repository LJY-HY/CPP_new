#include <stdio.h>
void print_array(int (*x)[5],int n) {
	//	int *x[5]�� ��� �ΰ����� �ؼ�����
	//	1.	x[5]��� �迭�� �ִµ� �� ���� ���� int�� pointer
	//		[int*][int*][int*][int*][int*]
	//		=>������ �迭
	//	2. int[5]¥�� �迭�� ����Ű�� ������
	//		[x]----->int[5]
	//		=>�迭 ������
	//
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf("%d", x[i][j]);			// �׳� �̷��� �迭ó�� �ٷ�� �ȴ�.=> �� ������
		}
		printf("\n");
	}
}
int main() {
	//�Ʒ� ������ �迭�� ��� [3]¥�� �迭�� ���°��� �´�.
	int x[3][5] = {
		1,2,3,4,5,
		1,2,3,4,5,
		1,2,3,4,5
	};
	print_array(x, sizeof(x)/sizeof(x[0]));
	return 0;
}