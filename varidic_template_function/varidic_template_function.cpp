#include "Foo.h"
#include "Bar.h"
#include "varidic_template_function.h"

using namespace samples;
int main()
{
	Foo* foo1 = Create<Foo>(1.0f);
	Foo* foo2 = Create<Foo>(1.0f, 20.f);

	//Compiler error
	//Foo* foo3 = Create<Foo>(1.0f, 2.0f, 3.0f);

	Bar* bar1 = Create<Bar>();
	Bar* bar2 = Create<Bar>(1, 2, 3);

	// Compile error
	// Bar* bar3 = Create<Bar>(1, 2);

	delete foo1;
	delete foo2;

	delete bar1;
	delete bar2;
}
