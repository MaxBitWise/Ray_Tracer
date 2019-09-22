#include"Point3D.h"
#include"Vec3D.h"
int main()
{
	Point3D	a(1.0, 1.0, 1.0);
	Vec3D	a1(1.0, 1.0, 1.0);

	a = a + a1;

	std::cout << a;
	system("pause");
	return 0;
}