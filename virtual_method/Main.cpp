#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace samples;

int main()
{
	//스택에 개체 생성할 때는 다형성 구현 불가
	Animal* cat = new Cat(3);
	Animal* dog = new Dog(7);

	//가상 함수들이기 때문에 동적 바인딩
	cat->Move();
	cat->Speak();

	dog->Move();
	dog->Speak();

	//동적 소멸자 호출
	delete cat;
	delete dog;

	return 0;
}