#include <iostream>
#include "Tiger.h"

namespace samples
{
	Tiger::Tiger(int age)
		:mAge(age)
	{}

	void Tiger::PretendIAmAZebra() const
	{
		std::cout << "I have zebra stripes" << std::endl;
	}
}