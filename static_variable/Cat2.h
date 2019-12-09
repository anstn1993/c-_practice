#pragma once

namespace samples
{
	class Cat2
	{
	public:
		Cat2(int age, char* name);
		virtual ~Cat2();

		static const char* GetType();

	private:
		static const char* mAnimalType;//고양이라는 종은 고양이 개체 500개를 만들어도 고양이로 동일

		int mAge;
		char* mName;
	};
}