#include <iostream>
#include "MoonSoo.h"

using namespace std;

namespace samples
{
	MoonSoo::MoonSoo()
		:Human("MoonSoo")
	{}

	void MoonSoo::SayMyName() const
	{
		cout << "I'm " << mName << "." << endl;
	}
}