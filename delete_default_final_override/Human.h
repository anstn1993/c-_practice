#pragma once

#include <string>

namespace samples
{
	class Human
	{
	public:
		Human() = delete;//기본 생성자 삭제
		Human(const char* name);

		//기본 소멸자로 쓴다는 건 이 클래스 안에서 추가로 메모리 할당을 하지 않는다는 것이다.
		//그런데 name이 char포인터다. 그 말은 std::string클래스로 쓰겠다는 것을 의미한다. 
		virtual ~Human() = default;

		virtual void SayMyName() const;

	protected://자식 클래스 개체에서만 접근 가능
		std::string mName;

	};
}