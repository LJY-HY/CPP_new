#include <iostream>
//

class Car {
	int speed;				//	�ν��Ͻ� ��������ʹ� C++11 ���� �ʵ��ʱ�ȭ ����
	//static int cnt=0;		//	error. static��� �����ʹ� �ݵ�� �ܺ� ���𿡼� �ʱ�ȭ �ؾ��Ѵ�.
	static int cnt;			//	�ݵ�� �ܺ� ������ �ʿ��ϰ�, �ʱ�ȭ�� �ܺμ��𿡼�
							//	java, C#�� �ܺμ��� �ʿ� ����.
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
	static int get_count() { return cnt; }	 
};
int Car::cnt = 0;

////	C++17���� "inline static"�̶�� ���� ����
//class Car {
//	int speed;				
//	inline static int cnt = 0;		//	�ܺ� ���� �ʿ����, ���⼭ �ʱ�ȭ�� ����
//						 
//public:
//	Car() { ++cnt; }
//	~Car() { --cnt; }
//	static int get_count() { return cnt; }
//};

int main() {
	//std::cout << Car::cnt << std::endl; �̰� �� �ȵ���

}