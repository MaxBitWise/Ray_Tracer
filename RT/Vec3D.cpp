#include "Vec3D.h"

Vec3D::Vec3D(float X, float Y, float Z) : x(X), y(Y), z(Z) {}

Vec3D Vec3D::operator+(const Vec3D& v)
{
	return(Vec3D(x + v.x, y + v.y, z + v.z));
}

Vec3D Vec3D::operator-()
{
	return(Vec3D(-x, -y, -z));
}

Vec3D Vec3D::operator-(const Vec3D& v)
{
	return(Vec3D(x - v.x, y - v.y, z - v.z));
}

Vec3D Vec3D::operator*(float t)
{
	return(Vec3D(x*t, y*t, z*t));
}

std::ostream& operator<<(std::ostream& os, const Vec3D v)
{
	os << v.x << " " << v.y << " " << v.z << std::endl;

	return os;
}