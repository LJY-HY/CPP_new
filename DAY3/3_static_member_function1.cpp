#include <iostream>
//
class Car {
	int speed;
	static int cnt;

public:
	Car() { ++cnt; }
	~Car() { --cnt; }
	//int get_count() { return cnt; }		//	�ν��Ͻ� �޼ҵ�
											//	�ݵ�� ��ü�� �־�� ȣ�Ⱑ���ϴ�
											//	c1.get_count()
	static int get_count() { return cnt; }	//	"��ü����" ȣ�Ⱑ���� ����Լ�(�޼ҵ�)---> �Ϲ��Լ��Ƴ�? 
											//	�Ϲ��Լ��ε� private ������ ������ �� �ִ�.
											//	Car::get_count() �� ȣ��
};
int Car::cnt = 0;							// private�ε� �̰Ŵ� �� ����?? ==> �׳� ������ �������...
int main() {
	std::cout << Car::get_count() << std::endl;

	Car c1;
	Car c2;
	
	//	�ν��Ͻ� �żҵ� �θ��� ��� �ΰ���
	std::cout << Car::get_count() << std::endl;		//	<==����
	std::cout << c1.get_count()<< std::endl;		

}