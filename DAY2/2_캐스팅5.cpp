int main() {
	const double d = 3.4;
	//double �ּҸ� char*�� ���
	char* p1 = (char*)&d;			//OK

	char* p2 = reinterpret_cast<char*>(const_cast<double*>(&d));
	//		char*�� double�ּҸ� ���	const double*�� const�� ���ٰ�		
	char* p3 = const_cast<char*>(reinterpret_cast<const char*>(&d));
}