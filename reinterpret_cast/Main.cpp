#include <iostream>

#include "Tiger.h"

using namespace std;
using namespace samples;

int main()
{
	Tiger* tiger = new Tiger(5);
	//�����͵��� ����ȭ�ؼ� ��ü�� �����͸� ������ �� reinterpret_cast�� ����ϸ� ����
	unsigned int intAddress = reinterpret_cast<unsigned int>(tiger);

	cout << "saving address as int: " << intAddress << endl;

	cout << "read int address to pointer" << endl;

	tiger = reinterpret_cast<Tiger*>(intAddress);
	tiger->PretendIAmAZebra();
	return 0;
}