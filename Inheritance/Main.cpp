#include <iostream>
#include <string>
#include "Dog.h"
#include "Cat.h"


using namespace samples;
using namespace std;

int main()
{
	int dogAge;
	int catAge;

	Dog dog(3);
	Cat cat(2);

	dogAge = dog.GetAge();
	catAge = cat.GetAge();

	cout << "Dog age is " << dogAge << endl;
	cout << "Cat age is " << catAge << endl;

	dog.Bark();
	cat.Purr();

	return 0;
}