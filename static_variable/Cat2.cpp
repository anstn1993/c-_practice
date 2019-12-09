#include <iostream>
#include "Cat2.h"

namespace samples
{	
	const char* Cat2::mAnimalType = "Cat";//헤더 파일에 이미 static키워드를 명시했기 때문에 여기서는 쓰지 않음
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