#include <iostream>
#include "Cat2.h"

namespace samples
{	
	const char* Cat2::mAnimalType = "Cat";//��� ���Ͽ� �̹� staticŰ���带 ����߱� ������ ���⼭�� ���� ����
	Cat2::Cat2(int age, char* name)
		:mAge(age)
	{
		mName = new char[strlen(name)+1];
		memcpy(mName, name, strlen(name)+1);
	}

	Cat2::~Cat2()
	{
		delete[] mName;
	}

	const char* Cat2::GetType()
	{
		return mAnimalType;
	}
}