#include <iostream>

#include "Tiger.h"

using namespace std;
using namespace samples;

int main()
{
	Tiger* tiger = new Tiger(5);
	//포인터들을 직렬화해서 개체의 데이터를 저장할 때 reinterpret_cast를 사용하면 유용
	unsigned int intAddress = reinterpret_cast<unsigned int>(tiger);

	cout << "saving address as int: " << intAddress << endl;

	cout << "read int address to pointer" << endl;

	tiger = reinterpret_cast<Tiger*>(intAddress);
	tiger->PretendIAmAZebra();
	return 0;
}