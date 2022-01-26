//	���������� : ��������͸� �ܺο��� ���� �����ϸ� ��ü�� ���°� �Ҿ����� �� �ִ�.
//				�����͸� private������ ���Ƽ� �ܺο� �߸��� ����� ���´�.

//	ĸ��ȭ(encapsulation), ��������(information hiding)

//	�������
//	��ü(object)		:	���� �����ϴ� ��� �繰
//						���α׷����� ����/�Լ� � ��� object dlwlaks
//	����������
//	int n;	// "����" ��� �մϴ�.
//	Bike b;	// "��ü(object)"��� �� ����մϴ�.

//	C++���� struct vs class �������� �Ʒ� �� �Ѱ���.
//			C#, java ���� �ٸ� ���� �������� ���� ����.
//	struct	: ���������� ������ public�� default
//	class	: ���������� ������ private�� default
//	��ü������ ������ ��������. ���� class�� ��ȣ�Ѵ�.

//struct Bike {
class Bike{
//private:		//private ���� ������
				//��� �Լ������� ������ �� �ְ� �ܺο����� ������ �� ����.
				//���ο� ���� �����ڰ� ���ö����� �Ʒ��� ��� ������� private
	int speed;
	int gear;		
public:			//public ���� ������
				//�ܺο����� ���� �����ϴ�
	void setGear(int value) {
		if(value>0)		//���� ���� ��ȿ���� Ȯ�� �Ŀ� ���¸� �����Ѵ�.
			gear = value;

	}
};

int main() {
	Bike b;
	//b.speed = 30;	//	error
	//b.gear = -10;	//	error
	b.setGear(-10);	//	ok. ������ �߸��� ���̹Ƿ� ���� ����ȵ�
}

