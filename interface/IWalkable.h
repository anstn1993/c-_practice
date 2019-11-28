#pragma once

namespace samples
{
	class IWalkable//I를 앞에 붙여 인터페이스를 나타냄
	{
	public:
		virtual void Walk() const = 0;//순수 가상 함수
	};
}
