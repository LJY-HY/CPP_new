#include <iostream>
#include <stdlib>

int main() {
	// ����ڰ� �Է��� ũ��(count)��ŭ ������ �Է¹������� �Ѵ�.
	int count;
	std::cin >> count;

	//int score[count];		// error. �����޸� �Ҵ��� �ؾ��Ѵ�(C++�� new)

	//����� ������ ũ��� �迭�� ������� ���� �޸� �Ҵ�
	int* score = new int[count];
	score[0] = 10;
	delete[] score;//�޸� ����
}