#include <iostream>

// C++�� �뵵���� ����ϱ� ���� "4��"�� ĳ������ ����
//	1. static_cast : �������� �´� ��츸 ���
int main() {
	double d = 3.14;
	//int n = (int)d;
	//	1.	primitive type���� �� ĳ���� ���
	int n = static_cast<int>(d);				//	���� casting���̵� �Ǵ°Ŵϱ� OK

	//	2.	void�����͸� �ٸ�Ÿ��* �� ĳ����		//  �̰� malloc�Ҷ� �� �ʿ��ѰŴϱ� OK
	int* p = static_cast<int*>(malloc(100));	
	free(p);

	//	3.	��Ӱ��� Ÿ�Գ����� ĳ���� ���
	//	�� ���� ���� ��κ� ����
	//	�Ʒ� �ڵ�� ���� ���� ������ ���� Ÿ���� �ּ� ĳ������ ��� ����
	double* p1 = static_cast<double*>(&n);		//  ������ ����.
}