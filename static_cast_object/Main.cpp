#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;
using namespace samples;

int main()
{
	Animal* pet1 = new Cat(2, "Nyaong");
	Animal* pet2 = new Dog(9, "Nuri");

	Cat* cat = static_cast<Cat*>(pet1);
	Dog* dog1 = static_cast<Dog*>(pet2);

	Dog* dog2 = static_cast<Dog*>(pet1);

	cout << "cat's name :" << cat->GetName() << endl;
	
	cout << "dog1's address :" << dog1->GetAddress() << endl;

	//print cat's name
	cout << "dog2's address :" << dog2->GetAddress() << endl;

	delete pet1;
	delete pet2;
	return 0;
}