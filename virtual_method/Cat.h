#pragma once

#include "Animal.h"

namespace samples
{
	class Cat : public Animal
	{
	public:
		Cat(int age);
		
		//�̹� �θ��� �Ҹ��ڰ� ���� �Ҹ����̱� ������ �����Ϸ��� �Ͻ������� ���� �Ҹ��� ����

		virtual void Move() const;
		virtual void Speak() const;
	};
}