#include <stdio.h>
//ǥ���������ġ
//stdout => ǥ�������ġ����(�����)
//stdin	 => ǥ���Է���ġ����(Ű����)
//stderr => ǥ�ؿ�����ġ����(�����)
// 
// stdout/stderr�� ����?
//	=>���۸��� ��å�� �ٸ���
//	=>ǥ�� ����� �� user/kernel model�� switch�� �Ͼ�°� overhead�� ũ��
//	stdout=>Line ���۸�
//			'\n'�� �־�� ��µ˴ϴ�.
//	stderr=>���۸��� ���� �ʴ´�.
//			�̴� err�� �߻��Ҷ����� �ٷιٷ� ����� ���ֱ� ������ err�� ã�� ����.
//			�ٸ� stdout�� ���۸������� ��� �κп��� err�� �߻��ߴ��� �� �� ����.
//
int main() {
#if 0
	int num;
	//scanf("%d", &num);
	fscanf(stdin, "%d", &num);

	printf("num:%d\n", num);
	//printf("Hell\n");
	fprintf(stdout, "Hell\n");
#endif
	fprintf(stdout, "hello");		//���� \n�� ��� ���ۿ� ���� while�� ���ư������� ������ �ȳ���
	while (1);
	return 0;
}