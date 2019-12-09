#pragma once

namespace samples
{
	namespace Math//글로벌 함수로 쓰일 것이기 때문에 namespace로 대체
	{
		template<typename T>
		T Add(T value1, T value2)
		{
			return value1 + value2;
		}

		template<typename T>
		T Divide(T value1, T value2)
		{
			return value1 / value2;
		}

		template<typename T>
		T Max(T value1, T value2)
		{
			return value1 < value2 ? value2 : value1;
		}

		template<typename T>
		T Min(T value1, T value2)
		{
			return value1 < value2 ? value1 : value2;
		}

		template<typename T>
		T Multiply(T value1, T value2)
		{
			return value1 * value2;
		}
	}
}