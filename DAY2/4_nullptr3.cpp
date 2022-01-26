#include <iostream>

void f(int n) { std::cout << "int" << std::endl; }		//1
void f(void* n) { std::cout << "void*" << std::endl; }	//2
void g(char* n) { std::cout << "char*" << std::endl; }	//3

int main() {
	// �Ʒ� �ڵ尡 ���� ��κ��� C++�����Ϸ��� ����� �ִ� ���.
#ifdef __cplusplus
#define NULL 0
#else
#define NULL (void*)0
#endif
	f(NULL);		//��ó�� �Ǿ� ������ �ٽ� 1��. 0���� define�ع������Ƿ�....
					//�ᱹ NULL�� ������ 0���� ����ϰ� �;�����....
					//����!!
	g(NULL);		//char*�� �ϴ��� 0�� �Ѿ

	//NULL�� �ƴ� ��¥ ������ 0�� �ʿ��ߴ�.
	//�׷��� nullptr�� ���� ����
	f(nullptr);
	g(nullptr);
}

// �� �ҽ��� �ٽ� : NULL ����� ���� ������