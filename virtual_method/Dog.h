#pragma once

#include "Animal.h"

namespace samples
{
	class Dog : public Animal
	{
	public:
		Dog(int age);

		//�̹� �θ��� �Ҹ��ڰ� ���� �Ҹ����̱� ������ �����Ϸ��� �Ͻ������� ���� �Ҹ��� ����

		virtual void Move() const;
		virtual void Speak() const;
	};
}