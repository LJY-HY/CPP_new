#include <stdio.h>
//// ##
////	=> �� �� ��ū�� �ϳ��� ��ū���� ������ش�.
////	=>Ȱ�� : ��ũ�θ� �̿��ؼ� �ڵ带 �����ϴ� ������ ���
//#define print_value(x)\
//printf("%d, %d\n",x##1,x##2)
//int main() {
//	int value1 = 10;
//	int value2 = 20;
//	print_value(value);
//}


//	assert �ܾ�
//	�̴� ��ǰ �ڵ忡�� ���� �ʰ� �׽�Ʈ �ڵ忡 ����.
#define assert(expr)do{\
if (!(expr)){	\
printf("assertion failed: %s, %s,%d", #expr, __func__, __LINE__);	\
abort();\
}\
}while(0)

//	������ �ð��� ǥ������ ��ȿ���� Ȯ���ϴ� ����� ������ �� �ִ�.
#define static_assert(expr)	\
char __static_assert_failed[(expr) ? 1:-1];	\
// expr�� �����̸� �ǵ������� -1ũ���� �迭�� ����� compile������ �߻����ѹ�����.
int main() {
	// ���׿�����
	
	int age;
	int ret = scanf("%d", &age);
	int next=0;
	next = (age > 0) ? next + 1 : 0;
	assert(age > 0);
}