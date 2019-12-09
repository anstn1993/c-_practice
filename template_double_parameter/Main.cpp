#include <iostream>
#include "Math.h"

using namespace samples;
using namespace std;

int main()
{
	int value1 = 15;
	int value2 = 3;

	cout << "Add: "<< Math::Add(value1, value2) << endl;
	cout << "Divide: "<< Math::Divide(value1, value2) << endl;
	cout << "Multiply: " << Math::Multiply(value1, value2) << endl;
	cout << "Max: " << Math::Max(value1, value2) << endl;
	cout << "Min: " << Math::Min(value1, value2) << endl;
	return 0;
}