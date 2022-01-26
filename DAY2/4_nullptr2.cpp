#include <iostream>

void f(int n) { std::cout << "int" << std::endl; }		//1
void f(void* n) { std::cout << "void*" << std::endl; }	//2
void g(char* n) { std::cout << "char*" << std::endl; }	//3

int main() {
	f(0);			//	1.��� 0�� ���� ����. �ٸ� nullpointer�� �Ͻ��� ����ȯ�� �����һ�. �׷��� '1'�� �ȴ�.
	f((void*)0);	//	2.��� �̰� ������ ���� ���� �� ����.=>define�ع�����

#define NULL (void*)0
	f(NULL);
	g(NULL);		//	NULL�� char*�� �ƴ� void*�̴�.
					//	void*->char*���� �Ͻ��� ����ȯ�� �ʿ��ϴ�.
					//	C���� �� �Ͻ��� ��ȯ ���
					//	C++�� ���ȵ�.
					//	�׷��� ����� C++�̹Ƿ� error.
}