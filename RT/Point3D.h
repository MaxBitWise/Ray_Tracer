
#ifndef __Point3D__
#define __Point3D__

#include"Vec3D.h"
#include<iostream>
using namespace std;
#pragma once
class Point3D
{
public:
	float x;
	float y;
	float z;

	Point3D(float X, float Y, float Z) :x(X), y(Y), z(Z) {}

	Point3D operator+(const Point3D& p);
	Point3D operator+(const Vec3D& v);
	
	Point3D operator-();
	Point3D operator-(const Point3D& p);
	Point3D operator-(const Vec3D& v);

	Point3D operator*(const float t);

	friend std::ostream& operator << (std::ostream& os, Point3D& p);
};



#endif