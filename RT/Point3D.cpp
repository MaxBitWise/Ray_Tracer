#include "Point3D.h"

Point3D Point3D::operator+(const Point3D& p)
{
	return(Point3D(x + p.x, y + p.y, z + p.z));
}

Point3D Point3D::operator+(const Vec3D& v)
{
	return (Point3D(x + v.x, y + v.y, z + v.z));
}

Point3D Point3D::operator-()
{
	return (Point3D(-x, -y, -z));
}

Point3D Point3D::operator-(const Vec3D& v)
{
	return (Point3D(x - v.x, y - v.y, z - v.z));
}

Point3D Point3D::operator-(const Point3D& p)
{
	return (Point3D(x - p.x, y - p.y, z - p.z));
}

Point3D Point3D::operator*(const float t)
{
	return(Point3D(x*t, y*t, z*t));
}

std::ostream& operator << (std::ostream& os, Point3D& p)
{
	os << p.x << " " << p.y << " " << p.z << std::endl;

	return os;
}