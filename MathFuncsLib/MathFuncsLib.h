#pragma once
#include <iostream>
using namespace std;


class Vector2
{
public:

	float x, y;
	Vector2();
	Vector2(float a, float b);
	Vector2 operator +(Vector2 &other);
	Vector2 operator -(Vector2 &other);//function to subtract one vector from another
	Vector2 operator *(const float &mult);//function to multiply 2d vectors
	float Magnitude();//function to find the magnitude of a 2d vector
	Vector2 Normalize();//function to normalize a vector
	float DotProduct(Vector2 &other);//function to find the dotproduct of two 2d vectors
	void Print();//prints out the vector
};



class Vector3
{
public:
	float x, y, z;
	Vector3() {};//default constructor
	Vector3(float a, float b, float c);//constructor takes three float arguments
	Vector3 operator +(Vector3 &other);
	Vector3 operator -(Vector3 &other);
	Vector3 operator *(const float &mult);
	float Magnitude();
	Vector3 Normalize();
	float DotProduct(Vector3 &other);
	Vector3 crossProduct(Vector3 &other);
	void Print();
};



class Vector4
{

public:
	float x, y, z, w;
	Vector4(float a, float b, float c, float d);
	Vector4 operator +(Vector4 &other);
	Vector4 operator -(Vector4 &other);
	Vector4 operator *(const float &mult);
	float Magnitude();
	Vector4 Normalize();
	float DotProduct(Vector4 &other);
	void Print();
};




class Matrix2
{
private:
	int * m_data;
public:

	Matrix2() {};
	Matrix2(int a, int b, int c, int d);
	Matrix2 Multiply(Matrix2 &other);
	Vector2 Vec2xMat2(const Vector2 &vec);
	void PirntMatrix2();

};



class Matrix3
{
private:
	int*m_data;
public:
	Matrix3() {};
	Matrix3(int a, int b, int c, int d, int e, int f, int g, int h, int i);
	Matrix3 Multiply(Matrix3 &other);
	Vector3 Vec3xMat3(const Vector3 &vec);
	Matrix3 RotateSetX(float a);
	Matrix3 RotateSetY(float a);
	Matrix3 RotateSetZ(float a);
	void PrintMatrix3();
};


class Matrix4
{
private:
	int* m_data;
public:
	Matrix4() {};
	Matrix4(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p);
	Matrix4 Multiply(Matrix4 &other);
	Vector4 Vec4xMat4(const Vector4 &vec);
	Matrix4 RotateSetX(float a);
	Matrix4 RotateSetY(float a);
	Matrix4 RotateSetZ(float a);
	void PrintMatrix4();

};



