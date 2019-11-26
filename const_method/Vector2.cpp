#include <iostream>
#include "Vector2.h"

using namespace std;

Vector2::Vector2()
	:mX(0)
	,mY(0)
{
	cout << "Vector2: " << "(" << mX << ", " << mY << ")" << endl;
}

Vector2::Vector2(int x, int y)
	:mX(x),
	 mY(y)
{
	cout << "Vector2: " << "(" << mX << ", " << mY << ")" << endl;
}

int Vector2::GetX() const
{
	cout << "GetX()->" << "mX = " << mX << endl;
	return mX;
}

int Vector2::GetY() const
{
	cout << "GetY()->" << "mY = " << mX << endl;
	return mY;
}

void Vector2::SetX(int x)
{
	mX = x;
	cout << "SetX( " << x << ")->" << mX << endl;
}

void Vector2::SetY(int y)
{
	mY = y;
	cout << "SetY( " << y << ")->" << mY << endl;
}

void Vector2::Add(const Vector2& other)
{
	mX = mX + other.mX;
	mY = mY + other.mY;
	cout << "Add(other)-> " << "mX = " << mX << " mY = " << mY << endl;
}