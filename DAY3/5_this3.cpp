#include <iostream>
class Test {
	int data;
public:
	void f1(int n) {								//	void f1(Test* this) �� ������ �� ����
		std::cout << this << std::endl;
		data = 10;							//	this->data=10	���� ����
	}
	static void f2(int n) {						//	void f2()	�� ������ �� ����
		std::cout << this << std::endl;		//	error. this ����.
		data = 10;							//	this->data=10���� �ٲ�� �ϴµ� this ��ü�� ����. ERROR
											//	�׷��� static ��� �Լ������� �ν��Ͻ� ����� ���� �ȵȴ�.
											//	�ݴ�� static ��� �Լ������� static �����Ϳ��� ���� �����ϴ�.
	}
};

int main() {
	Test t;				//	f1�� ȣ���Ϸ��� ��ü�� �ʿ��մϴ�.
	t.f1(10);				//	������ �ÿ� f1(&t)�� ����Ǵ� �����Դϴ�.

	Test::f2(10)			//	��ü ���� ȣ���߽��ϴ�.
						//	����, ������ �Ǿ "f2()"�Դϴ�.
						//	��, ���ڰ� �߰��� �� �����ϴ�.
}