#include <iostream>
//	
//	
//	
struct Rect {
	//	��� ������(�ٸ� ���� �ʵ�(field)��� �Ѵ�.)
	int left;
	int top;
	int right;
	int bottom;

	//	��� �Լ�(�޼ҵ�(method)��� �Ѵ�.)
	int getArea() {	// �����ϵǸ� int getArea(Rect* this)
		return (right - left) * (top - bottom);		//this->right - this->left �� �ٲ�
	}
	//	��� : ��� ����Լ��� �����ϵǸ� ���ڷ� Rect* �� �߰��Ǵ� �����Դϴ�.
	void draw() {	// void drat(Rect* this)	Python�� ���� self�� �־��ش�.
		std::cout << "draw rect" << std::endl;
	}
};
int main() {
	Rect rc1 = { 1,1,10,10 };						
	Rect rc2 = { 2,2,5,5 };
	rc1.getArea();	//	C++�����Ϸ��� ��ü�� �Լ� ����ó�� ������ �ش�.
					//	getArea(&rc1)
}