#pragma once

#include "Animal.h"

namespace samples
{
	class Cat : public Animal
	{
	public:
		Cat(int age);
		
		//이미 부모의 소멸자가 가상 소멸자이기 때문에 컴파일러가 암시적으로 가상 소멸자 생성

		virtual void Move() const;
		virtual void Speak() const;
	};
}