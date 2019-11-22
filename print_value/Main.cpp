#include <iostream>

using namespace std;

void PrintValues()
{
	cout << "=======print values=======" << endl;

	int integer = 10;
	float decimal = 1.5f;
	char letter = 'A';
	char string[] = "Hello World.";

	cout << integer << endl;
	cout << decimal << endl;
	cout << letter << endl//여러 줄 출력 
		<< string << endl;
}

int main()
{
	PrintValues();
	return 0;
}