#include "String.h"

using namespace samples;

int main()
{	

	String* s = new String("This is original.");
	s->Print();

	String* sCopy = new String(*s);
	delete s;
	
	sCopy->Print();/* ������ �������� ���纻�� char�����ʹ� ���� �Ҵ��߱� ������ ���� ���ڿ��� ��� ����. */
	delete sCopy;
	return 0;
}