#include <iostream>
//
//	2.	reinterpret_cast
//		1)	���� �ٸ� Ÿ���� �ּ� ĳ����
//		2)	����<=>�ּ� ������ ĳ����
int main() {
	int n = 10;
	//double* p1 = static_cast<double*>(&n);		//  error
	double* p1 = reinterpret_cast<double*>(&n);		//  OK. �ǵ��� �ִٴ� ���� �ǹ�.
	*p1 = 3.14;										//	�׷����� �ұ��ϰ� �̷��Դ� ���� ����....
	int* p2 = 1000;									//	ERROR(p2�� 1000���� �ּҸ� ������)
	int* p2 = (int*)1000;							//	OK
	int* p2 = static_cast<int*>(1000);				//	Compile ERROR. ���� ��ü�� �ּҰ����� �ִ� ���� �������� ������? ERROR!
	int* p2 = reinterpret_cast<int*>(1000);			//	�׷����� �ұ��ϰ� ���� ��ü�� �ּҰ����� �ְ� ���� '�ǵ�'�� �־�! OK

	int n2=reinterpret_cast<int>(3.4)				//	ERROR. �뵵�� ���� �ʴ�. static_cast�� ����ϰų� ĳ���� ��ü�� �����ϸ� �ȴ�.
													//	reinterpret cast�� �뵵�� ������ '�ּ�'�� ĳ�����Ҷ�.....
}