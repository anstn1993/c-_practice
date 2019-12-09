#pragma once

#include "Animal.h"

namespace samples
{
	class Dog : public Animal
	{
	public:
		Dog(int age, char* address);
		virtual ~Dog();

		const char* GetAddress() const;//정적 바인딩

	private:
		char* mHomeAddress;

	};
}