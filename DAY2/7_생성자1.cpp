#include <iostream>
class Bike {
//struct Bike{
//public:
	int speed;
	int gear;
public:
	//	������ : ��ü�� �����ϸ� �ڵ����� ȣ��Ǵ� �Լ�
	//	Ư¡		:	Ŭ���� �̸��� ����
	//				��ȯ Ÿ���� ���� �ʰ� ��ȯ�Ҽ��� ����.
	//				���ڴ� �־ �ǰ� ��� �ȴ�.
	//void init() {
	Bike(){
		std::cout << "Bike()" << std::endl;
		speed = 10;
		gear = 20;
	}
};
int main() {
	//Bike b = { 30,10 };	//�����Ͱ� public�� ������ �̷��� �ʱ�ȭ ����
						//�ᱹ, class�� struct�� (����)�����ϹǷ�
						//������ private�� �ִٸ� error
	Bike b;
	//b.init();			//��ü�� ����� �ڵ����� �Ҹ��� �� �� ������?
}