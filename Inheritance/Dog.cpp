#include <iostream>
#include "Dog.h"

using namespace std;

namespace samples
{
	Dog::Dog(int age)
		:Animal(age)/* �θ� ������ ȣ�� */
	{
	}

	string Dog::Bark() const
	{
		return string("BowWow");
	}
}