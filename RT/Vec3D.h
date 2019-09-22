#ifndef __Vec3D__
#define __Vec3D__

#include<iostream>
#pragma once
class Vec3D
{
public:
	float x;
	float y;
	float z;

	Vec3D(float X, float Y, float Z);
	
	Vec3D operator+(const Vec3D& v);

	Vec3D operator-();
	Vec3D operator-(const Vec3D& v);

	friend std::ostream& operator<<(std::ostream& os, const Vec3D v);

	Vec3D operator*(float t);
	
};



#endif