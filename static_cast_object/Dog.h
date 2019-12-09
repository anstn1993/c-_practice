#pragma once

#include "Animal.h"

namespace samples
{
	class Dog : public Animal
	{
	public:
		Dog(int age, char* address);
		virtual ~Dog();

		const char* GetAddress() const;//���� ���ε�

	private:
		char* mHomeAddress;

	};
}