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
		static const char* mAnimalType;//����̶�� ���� ����� ��ü 500���� ���� ����̷� ����

		int mAge;
		char* mName;
	};
}