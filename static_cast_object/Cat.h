#pragma once

#include "Animal.h"

namespace samples
{
	class Cat : public Animal
	{
	public:
		Cat(int age, char* name);
		virtual ~Cat();

		const char* GetName() const;//정적 바인딩

	private:
		char* mName;
	};
}