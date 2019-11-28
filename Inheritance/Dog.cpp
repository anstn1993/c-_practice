#include <iostream>
#include "Dog.h"

using namespace std;

namespace samples
{
	Dog::Dog(int age)
		:Animal(age)/* 부모 생성자 호출 */
	{
	}

	string Dog::Bark() const
	{
		return string("BowWow");
	}
}