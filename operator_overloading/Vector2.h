#pragma once

#include <iostream>

namespace samples
{
	class Vector2
	{
	public:
		Vector2();
		Vector2(int x, int y);

		int GetX() const;
		void SetX(int x);
		
		int GetY() const;
		void SetY(int y);

		bool operator==(const Vector2& rhs) const;/* 동치 비교 연산자 오버로딩 */

		/* Multiply 함수 대체 */
		Vector2 operator*(const Vector2& rhs) const;/* Vector * Vector */
		Vector2 operator*(int multiplier) const;/* Vector * 숫자 */
		friend Vector2 operator*(int multiplier, const Vector2& vector);/*숫자 * Vector 인 경우에는 숫자 타입의 헤더 파일에 접근해서 바꾸거나 할 수는 없으니 전역 함수로 생성 */

		/* Scale 함수 대체 */
		Vector2& operator*=(const Vector2& rhs);/* Vector(self) * Vector */
		Vector2& operator*=(int multiplier);/* Vector(self) * 숫자 */
		
		friend std::ostream& operator<<(std::ostream& out, const Vector2& vector);


	private: 
		int mX;
		int mY;
	};
}
