#include <iostream>
#include <cstdlib>

int main() {
	// ����ڰ� -1�� �Է��Ҷ� ���� �Է¹޾ƾ� �Ѵ�.
	//�׷��� �Է°��� �ݵ�� �����ϰ� �־���Ѵ�.


	int count=0;
	int size = 5;		//����ũ��
	int n = 0;

	int* buff = new int[size];
	while (1){
		std::cin >> n;
		if (n == -1) break;

		buff[count] = n;
		++count;
		
		if (count == size) {
			int* temp = new int[size + 5];
			memcpy(temp, buff, sizeof(int) * size);
			delete[] buff;
			buff = temp;
			size += 5;
		}
	}
	std::cout << "�Էµ� ����:" << count << std::endl;
	for (int i = 0; i < count; i++)
		std::cout << buff[i] << std::endl;
}