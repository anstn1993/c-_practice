#include <iostream>
#include "Vector.h"

using namespace std;

namespace samples
{
	Vector::Vector()
		:mX(0)
		,mY(0)
	{
		cout << "Vector object created by basic constructor - mX = " << mX << ", mY =" << mY << endl;
	}

	Vector::Vector(int x, int y)
		: mX(x)
		, mY(y)
	{
		cout << "Vector object created by custom constructor - mX = " << mX << ", mY =" << mY << endl;
	}
	
	int Vector::GetX() const
	{
		cout << "GetX() - mX = " << mX << endl;
		return mX;
	}

	void Vector::SetX(int x)
	{
		mX = x;
		cout << "SetX(" << x << ") - mX = " << mX << endl;
	}

	int Vector::GetY() const
	{
		cout << "GetY() - mY = " << mY << endl;
		return mY;
	}
	void Vector::SetY(int y)
	{
		mY = y;
		cout << "SetY(" << y << ") - mY = " << mY << endl;
	}

	bool Vector::IsEqual(const Vector& v) const
	{
		return (mX == v.mX && mY == v.mY);
	}
	
	//const 메소드이기 때문에 자기 자신의 값은 변하지 않음
	Vector Vector::Multiply(const Vector& v) const
	{
		Vector result(mX * v.GetX(), mY * v.GetY());
		cout << "Multiply(const Vector& v) const - result.mX = " << result.mX << ", result.mY = " << result.mY << endl;
		return result;
	}

	Vector Vector::Multiply(int multiplier) const
	{
		Vector result(mX * multiplier, mY * multiplier);
		cout << "Multiply(int multiplier) const - result.mX = " << result.mX << ", result.mY = " << result.mY << endl;

		return result;
	}

	//const 메소드가 아니기 때문에 자기 자신을 확대 축소하는 메소드라는 걸 유추할 수 있음
	void Vector::Scale(const Vector& v)
	{
		mX *= v.mX;
		mY *= v.mY;
		cout << "Scale(const Vector& v) - mX = " << mX << ", mY = " << mY<< endl;
	}

	void Vector::Scale(int multiplier)
	{
		mX *= multiplier;
		mY *= multiplier;
		cout << "Scale(int multiplier) - mX = " << mX << ", mY = " << mY << endl;

	}
}