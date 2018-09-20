#include <iostream>
#include <cmath>
class Point
{
public: 
	Point(){}
	Point(float X, float Y)
	{
		x = X;
		y = Y;
	}

	float x, y;
};

class Vector
{

public:
	Vector():x(0), y(0), z(0) {}
	Vector(float X, float Y, float Z)
	{
		x = X;
		y = Y;
		z = Z;
	}

float Length() const;
float LengthSquared() const;
Vector Normalized() ;
Vector operator +(const Vector& v) const;
Vector operator -(const Vector& v) const;
Vector operator *(const float s);
Vector operator /(const float s);

float x,y,z;
};

float Vector::Length() const
{
	float length;
	length = sqrt(x*x + y*y);
	return length;
}

float Vector::LengthSquared() const
{
	float length;
	return length;
}

Vector Vector::Normalized() 
{
	Vector normalized;
	normalized = (*this) / Length();
	return normalized;
}

Vector Vector::operator+(const Vector& V)
{
	Vector returnVec(V.x + this->x, V.y + this->y, V.z + this->z); 
	return returnVec;
}

Vector Vector::operator-(const Vector& V)
{
	Vector returnVec(V.x - this->x, V.y - this->y, V.z - this->z); 
	return returnVec;
}

Vector Vector::operator*(const float s)
{
	Vector scaled;
	scaled.x = x * s;
	scaled.y = y * s;
	return scaled;
}

Vector Vector::operator/(const float s)
{
	Vector scaled;
	scaled.x = x / s;
	scaled.y = y / s;
	return scaled;
}
int main()
{


}