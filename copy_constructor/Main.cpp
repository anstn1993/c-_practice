#include "String.h"

using namespace samples;

int main()
{	

	String* s = new String("This is original.");
	s->Print();

	String* sCopy = new String(*s);
	delete s;
	
	sCopy->Print();/* 원본이 지워져도 복사본의 char포인터는 따로 할당했기 때문에 원본 문자열이 살아 있음. */
	delete sCopy;
	return 0;
}