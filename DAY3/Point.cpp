#include "Point.h"
Point::Point(int a, int b) :x(a), y(b) {
	//	왜 ::지??? .이 아니고?? namespace가 있어야 쓰는거 아니었나?
}
Point::~Point() {
}
void Point::set(int a, int b) {
	x = a;
	y = b;
}