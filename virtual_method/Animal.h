#pragma once

namespace samples
{
	class Animal
	{
	public:
		Animal(int age);
		virtual ~Animal();
		//�������� �ٸ��� �ൿ�ϰ� ���ϱ� ������ ������ �ο�
		virtual void Move() const;
		virtual void Speak() const;
		
		int GetAge() const;//���̿��� �������� ���ٰ� ����
			
	private: 
		int mAge;
	};
}