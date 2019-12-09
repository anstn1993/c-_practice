#include "Human.h"
#include "MoonSoo.h"
#include "MoonSooClone.h"
#include <iostream>

using namespace samples;

int main()
{
	Human* human = new Human("MoonSoo");
	human->SayMyName();

	Human* human2 = new MoonSoo();
	human2->SayMyName();

	MoonSoo moonsoo;
	//compile error
	//MoonSooClone moonsooClone(moonsoo);

	delete human;
	delete human2;

	return 0;
}
