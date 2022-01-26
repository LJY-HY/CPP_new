int main() {
	const double d = 3.4;
	//double 주소를 char*에 담기
	char* p1 = (char*)&d;			//OK

	char* p2 = reinterpret_cast<char*>(const_cast<double*>(&d));
	//		char*에 double주소를 담기	const double*을 const를 없앨게		
	char* p3 = const_cast<char*>(reinterpret_cast<const char*>(&d));
}