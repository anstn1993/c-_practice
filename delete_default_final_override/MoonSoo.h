#pragma once

#include "Human.h"

namespace samples
{
	class MoonSoo final : public Human // MoonSooŬ���� ��� ����
	{
	public:
		MoonSoo();
		MoonSoo(const MoonSoo& otherMoonSoo) = delete;//�ڽ��� �����ϴ� �� ����

		virtual ~MoonSoo() override = default;//override�� �ϴ� ������ �θ��� �Ҹ��ڰ� ���� �Լ���� �� �����ϱ� ���ؼ���. 

		virtual void SayMyName() const override;//�θ� Ŭ���� �޼ҵ� ������ ����

		//compile error
		//void Scream() const override;
	};
}