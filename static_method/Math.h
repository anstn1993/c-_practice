#pragma once

namespace samples
{
	class Math
	{
	public:
		static int Ceil(float value);
		static int Floor(float value);
		static float Power(float value, float power);
		static int Round(float value);
		static float Square(float value);

	private:
		Math();//이 클래스는 전역적인 함수들로 구성되기 때문에 개체를 만들 필요 없음
	};
}