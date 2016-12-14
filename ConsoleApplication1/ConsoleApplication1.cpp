// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "MathFuncsLib\MathFuncsLib.h"
	using namespace std;

	int main()
	{
		Vector2 Vec2A = Vector2(4, 5);
		Vector2 Vec2B = Vector2(6, 2);
		Vector2 Vec2Add = Vec2A + Vec2B;
		Vector2 Vec2Sub = Vec2A - Vec2B;
		Vector2 Vec2Mult = Vec2A * 5;
		float Vec2AMag = Vec2A.Magnitude();
		float Vec2BMag = Vec2B.Magnitude();
		Vector2 Vec2ANorm = Vec2A.Normalize();
		Vector2 Vec2BNorm = Vec2B.Normalize();
		float Vec2Dot = Vec2ANorm.DotProduct(Vec2BNorm);
		cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << "2D Vectors" << endl;
		cout << "first 2d vector" << endl;
		Vec2A.Print();
		cout << "second 2d vector" << endl;
		Vec2B.Print();
		cout << "both 2d vectors added together" << endl;
		Vec2Add.Print();
		cout << "second 2d vector subtracted from first 2d vector" << endl;
		Vec2Sub.Print();
		cout << "both 2d vectors multiplied" << endl;
		Vec2Mult.Print();
		cout << "magnitude of first 2d vector" << endl;
		cout << Vec2AMag << endl;
		cout << "magnitude of second 2d vector" << endl;
		cout << Vec2BMag << endl;
		cout << "first 2d vector normalized" << endl;
		Vec2ANorm.Print();
		cout << "second 2d vector normalized" << endl;
		Vec2BNorm.Print();
		cout << "the dot product of both vectors" << endl;
		cout << Vec2Dot << endl;


		Vector3 Vec3A = Vector3(4, 5, 6);
		Vector3 Vec3B = Vector3(6, 2, 9);
		Vector3 Vec3Add = Vec3A + Vec3B;
		Vector3 Vec3Sub = Vec3A - Vec3B;
		Vector3 Vec3Mult = Vec3A * 5;
		float Vec3AMag = Vec3A.Magnitude();
		float Vec3BMag = Vec3B.Magnitude();
		Vector3 Vec3ANorm = Vec3A.Normalize();
		Vector3 Vec3BNorm = Vec3B.Normalize();
		float Vec3Dot = Vec3ANorm.DotProduct(Vec3BNorm);
		Vector3 Vec3Cross = Vec3A.crossProduct(Vec3B);
		cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << "3D Vectors" << endl;
		cout << "first 3d vector" << endl;
		Vec3A.Print();
		cout << "second 3d vector" << endl;
		Vec3B.Print();
		cout << "both 3d vectors added together" << endl;
		Vec3Add.Print();
		cout << "second 3d vector subtracted from first 2d vector" << endl;
		Vec3Sub.Print();
		cout << "both 3d vectors multiplied" << endl;
		Vec3Mult.Print();
		cout << "magnitude of first 3d vector" << endl;
		cout << Vec3AMag << endl;
		cout << "magnitude of second 3d vector" << endl;
		cout << Vec3BMag << endl;
		cout << "first 3d vector normalized" << endl;
		Vec3ANorm.Print();
		cout << "second 3d vector normalized" << endl;
		Vec3BNorm.Print();
		cout << "the dot product of both vectors" << endl;
		cout << Vec3Dot << endl;
		cout << "the cross product of both vectors" << endl;
		Vec3Cross.Print();


		Vector4 Vec4A = Vector4(4, 5, 6, 7);
		Vector4 Vec4B = Vector4(6, 2, 9, 3);
		Vector4 Vec4Add = Vec4A + Vec4B;
		Vector4 Vec4Sub = Vec4A - Vec4B;
		Vector4 Vec4Mult = Vec4A * 5;
		float Vec4AMag = Vec4A.Magnitude();
		float Vec4BMag = Vec4B.Magnitude();
		Vector4 Vec4ANorm = Vec4A.Normalize();
		Vector4 Vec4BNorm = Vec4B.Normalize();
		float Vec4Dot = Vec4ANorm.DotProduct(Vec4BNorm);
		cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << "4D Vectors" << endl;
		cout << "first 4d vector" << endl;
		Vec4A.Print();
		cout << "second 4d vector" << endl;
		Vec4B.Print();
		cout << "both 4d vectors added together" << endl;
		Vec4Add.Print();
		cout << "second 4d vector subtracted from first 2d vector" << endl;
		Vec4Sub.Print();
		cout << "both 4d vectors multiplied" << endl;
		Vec4Mult.Print();
		cout << "magnitude of first 4d vector" << endl;
		cout << Vec4AMag << endl;
		cout << "magnitude of second 4d vector" << endl;
		cout << Vec4BMag << endl;
		cout << "first 4d vector normalized" << endl;
		Vec4ANorm.Print();
		cout << "second 4d vector normalized" << endl;
		Vec4BNorm.Print();
		cout << "the dot product of both vectors" << endl;
		cout << Vec4Dot << endl;


		Matrix2 MatA2 = Matrix2(4, 3, 2, 1);
		Matrix2 MatB2 = Matrix2(1, 2, 3, 4);
		Vector2 Vec2 = Vector2(8, 5);
		Matrix2 Mat2Mult = MatA2.Multiply(MatB2);
		Vector2 VecxMat = MatA2.Vec2xMat2(Vec2);
		cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << "2D Matrix" << endl;
		cout << "first 2d matrix" << endl;
		MatA2.PirntMatrix2();
		cout << "second 2d matrix" << endl;
		MatB2.PirntMatrix2();
		cout << "multiplying the two above 2d matricies together" << endl;
		Mat2Mult.PirntMatrix2();


		Matrix3 MatA3 = Matrix3(1, 0, 0, 0, 1, 0, 0, 0, 1);
		Matrix3 MatB3 = Matrix3(9, 8, 7, 6, 5, 4, 3, 2, 1);
		Vector3 Vec3 = Vector3(3, 7, 0);
		Matrix3 Mat3Mult = MatA3.Multiply(MatB3);
		Vector3 Vec3xMat = MatA3.Vec3xMat3(Vec3);
		cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << "3D Matrix" << endl;
		cout << "first 3d matrix" << endl;
		MatA3.PrintMatrix3();
		cout << "second 3d matrix" << endl;
		MatB3.PrintMatrix3();
		cout << "multiplying the two above 3d matricies together" << endl;
		Mat3Mult.PrintMatrix3();
		Matrix3 rotX = MatA3.RotateSetX(1.571);
		cout << "first matrix rotated around the x-axis" << endl;
		rotX.PrintMatrix3();
		Matrix3 rotY = MatA3.RotateSetY(1.571);
		cout << "first matrix rotated around the y-axis" << endl;
		rotY.PrintMatrix3();
		Matrix3 rotZ = MatA3.RotateSetZ(1.571);
		cout << "first matrix rotated around the z-axis" << endl;
		rotZ.PrintMatrix3();


		Matrix4 MatA4 = Matrix4(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
		Matrix4 MatB4 = Matrix4(16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1);
		Vector4 Vec4 = Vector4(3, 7, 0, 5);
		Matrix4 Mat4Mult = MatA4.Multiply(MatB4);
		Vector4 Vec4xMat = MatA4.Vec4xMat4(Vec4);
		cout << "||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << "4D Matrix" << endl;
		cout << "first 4d matrix" << endl;
		MatA4.PrintMatrix4();
		cout << "second 4d matrix" << endl;
		MatB4.PrintMatrix4();
		cout << "multiplying the two above 4d matricies together" << endl;
		Mat4Mult.PrintMatrix4();
		Matrix4 m = MatA4.RotateSetX(1.571);
		cout << "first matrix rotated around the x-axis" << endl;
		m.PrintMatrix4();
		Matrix4 e = MatA4.RotateSetY(1.571);
		cout << "first matrix rotated around the y-axis" << endl;
		e.PrintMatrix4();
		Matrix4 p = MatA4.RotateSetZ(1.571);
		cout << "first matrix rotated around the z-axis" << endl;
		p.PrintMatrix4();
		system("pause");
		return 0;

	
    return 0;
}

