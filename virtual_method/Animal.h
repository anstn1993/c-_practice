#pragma once

namespace samples
{
	class Animal
	{
	public:
		Animal(int age);
		virtual ~Animal();
		//동물마다 다르게 행동하고 말하기 때문에 다형성 부여
		virtual void Move() const;
		virtual void Speak() const;
		
		int GetAge() const;//나이에는 다형성이 없다고 생각
			
	private: 
		int mAge;
	};
}