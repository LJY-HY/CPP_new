#include <stdio.h>

//	1.	���ڿ��� char�迭�� ǥ���ȴ�
//	2.	%s�� ���� ���ڿ��� ����� �� �ִ�.
//	3.	C����� ��� ���ڿ��� �ݵ�� '\0'�� �������� �����Ѵ�.
//		=>���ڿ��� ���̴� �迭�ӿ��� �ұ��ϰ� ���̸� �������� �ʿ䰡 ����.
//		=>���ڿ��� �ݵ�� '\0'�� ������ �������� ���� �迭�� ���� �ȱ׷��� �ȴ�.
//		
// "" : ���ڿ�
// '' : ����
//
void print_str(char* str) {
	while (*str) {//�̷��� �� ���� ����.
		printf("%c", *str++);
	}
	//while (*str != '\0') {
	//	printf("%c", *str);
	//	str++;				//������ 1byte��
	//}
}
int main() {
	//char str[] = { 'A','B','C','\0'};
	char str[] = "ABC";		//�б� ���� ����
	char* str2[] = "ABC";	//���� �б⸸ ����
	str[1] = 'X';	//OK
	str[1] = 'X';	//error : ���� �Ұ����� ���ڿ��� �����߽��ϴ�.=>���� �̰� compile�ܰ迡���� ���� �ȶ߰� runtime�� ��

	const char* str3 = 'ABC';
	//char * const str3�ʹ� �ٸ���. �̰Ŵ� char�� �����Ͱ� ����Ű�� ����� const�� ����
	//const char* str3�� str3�� ����Ű�� ���ڿ��� constȭ
	//�׷� �� �� constȭ�Ϸ���
	//const char* const str3="ABC"
	str3[1] = 'X';	//���� �ٷ� error�� ���.
	printf("%s\n", str);	
	print_str(str);
}