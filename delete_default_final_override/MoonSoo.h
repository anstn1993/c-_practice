#pragma once

#include "Human.h"

namespace samples
{
	class MoonSoo final : public Human // MoonSoo클래스 상속 방지
	{
	public:
		MoonSoo();
		MoonSoo(const MoonSoo& otherMoonSoo) = delete;//자신을 복사하는 것 금지

		virtual ~MoonSoo() override = default;//override를 하는 이유는 부모의 소멸자가 가상 함수라는 걸 보장하기 위해서다. 

		virtual void SayMyName() const override;//부모 클래스 메소드 재정의 보장

		//compile error
		//void Scream() const override;
	};
}