struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
//	1. call by value�� ������ ���� �������� �ʰڴٴ� ���.
//		�׷��� ������ ȣ���Ҷ����� ���纻�� ����Ƿ� �޸� ������尡 �����Ѵ�.
//		�׷��� &������ ������ �޸� �������� ����.
//		�ٸ� ���� ���氡���ϰ� �ȴ�.
//	2. const reference�� ����ϸ� ���纻 ���� ������ ���� �������� �ʰڴٰ� ����� �� �ִ�.
// 
//void foo(Rect r) {
void foo(const Rect& r) {

}

int main() {
	Rect r = { 1,1,10,10 };
	foo(r);	// ���� : foo�� ����� r�� ���¸� �����ϸ� �ȵȴ�.
}

//���� �� ���� �ڵ��?
//1���� ����. int�� �׷��� ũ�� �ʴ�. ���� &�� ���������� ������ ������ �Ѵ�. ���� 1���� ����ȭ�ϱ⿡ ����.
//
void foo(int n) {}			//1. ���� �ڵ�
void foo(const int& n) {}	//2. ���� �ʴ�.

// �Լ� ���ڸ� �޴� ���
//	1.	���ڰ��� �����Ϸ���
//		-> �����͵� ����, reference�� ����.
//		������ "���۷����� �� �� �θ� ���"
//		swap(int *, int *)
//		swap(int&, int&)
// 
// 2.	���ڰ��� �������� �ʰڴٸ�..
// A. primitive type  : call by value		void foo(int n)			�� �Ϲ� int�� ���� Ÿ���̸� call by value�� �ϰ�
// B. user define type: const reference		void foo(const Rect& r)	struct�� ���� ���� ���� Ÿ���̸� const reference�� �ض�
// 
//