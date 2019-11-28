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
		//const �޼ҵ��̱� ������ �ڱ� �ڽ��� ���� ������ ����
		Vector Multiply(const Vector& v) const;
		Vector Multiply(int multiplier) const;

		//const �޼ҵ尡 �ƴϱ� ������ �ڱ� �ڽ��� Ȯ�� ����ϴ� �޼ҵ��� �� ������ �� ����
		void Scale(const Vector& v);
		void Scale(int multiplier);

	private:
		int mX;
		int mY;
	};
}
