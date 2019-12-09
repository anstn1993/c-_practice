#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	const int intNumber = 10;// 0000 0000 0000 1010
	const float floatNumber = static_cast<float>(intNumber);//10.0f (0100 0001 0010 0000 0000 0000 0000 0000)
	const short shortNumber = static_cast<short>(intNumber);//10 (0000 1010)

	cout << showbase << hex << uppercase;
	cout << "int: " << intNumber //0XA in Hex
		<< ", short: " << shortNumber //0XA in Hex
		<< endl;
	cout << "int: " << intNumber //0XA in Hex
		<< ", float: " << floatNumber //0X41200000 in Hex
		<< endl;

	return  0;
}