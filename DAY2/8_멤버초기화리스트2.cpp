// ��� �ʱ�ȭ ����Ʈ�� �ݵ�� �ʿ��� ���
class Test {
	int a;
	int b;
	const int c;			//��? �̰� ������ �ʱ�ȭ�� �Ǿ� �־�� �ϴµ�?
public:
	Test(int x) : c(x)		//ok. ������ �ƴ� ��¥ �ʱ�ȭ. 
	{
		//c = x;			// const�� ������ �Ͼ �� ����==>compile error
	}
};

int main() {
	Test t(10);
}