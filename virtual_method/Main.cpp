#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace samples;

int main()
{
	//���ÿ� ��ü ������ ���� ������ ���� �Ұ�
	Animal* cat = new Cat(3);
	Animal* dog = new Dog(7);

	//���� �Լ����̱� ������ ���� ���ε�
	cat->Move();
	cat->Speak();

	dog->Move();
	dog->Speak();

	//���� �Ҹ��� ȣ��
	delete cat;
	delete dog;

	return 0;
}