int main() {
	const int c = 10;

	int* p1 = &c;							//	error
	int* p2 = (int*)&c;						//	ok
	int* p3 = static_cast<int*>&c;			//	error
	int* p4 = reinterpret_cast<int*>(&c);	//	error
	int* p5 = const_cast<int*>(&c);			//	ok
											//	����� ���Ÿ� ���� ĳ����
}

//	��� : �뵵�� �°� ĳ������ �������.
//	�׷���, ������ �ڵ带 ���ؼ��� static_cast�� �������.
//	�׷���, �Ӻ���� �оߴ� "reinterpret cast"�� �ʿ��ϱ��ϴ�.

//	����� �����ϰ� �Ϸ��� static_cast�� ���.
//	���� ������ ���ٸ� ���� �ǵ��� �ִٸ� �ٸ� ������ cast�� ���.
//	�׷��� �ʴٸ� ���Ķ�.