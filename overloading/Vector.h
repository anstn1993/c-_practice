#pragma once

namespace samples
{
	class Vector
	{
	public:
		Vector();
		Vector(int x, int y);

		int GetX() const;
		void SetX(int x);

		int GetY() const;
		void SetY(int y);

		bool IsEqual(const Vector& v) const;
		//const 메소드이기 때문에 자기 자신의 값은 변하지 않음
		Vector Multiply(const Vector& v) const;
		Vector Multiply(int multiplier) const;

		//const 메소드가 아니기 때문에 자기 자신을 확대 축소하는 메소드라는 걸 유추할 수 있음
		void Scale(const Vector& v);
		void Scale(int multiplier);

	private:
		int mX;
		int mY;
	};
}
