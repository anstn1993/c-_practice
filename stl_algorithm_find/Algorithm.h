#pragma once

#include <algorithm>

namespace samples
{
	namespace Algorithm
	{
		template<typename ITER, typename T>//ITER: �迭, T: ã�� ��� ��
		const ITER* find(const ITER* begin, const ITER* end, const T& value)
		{
			const ITER* p = begin;
			while (p != end) {
				if (*p == value) {
					break;
				}
				++p;
			}
			return p;
		}
	}
}