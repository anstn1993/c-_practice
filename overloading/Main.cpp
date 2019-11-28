#include <iostream>
#include "Vector.h"

using namespace samples;
using namespace std;

int main()
{
	Vector a;
	Vector b(1, 2);
	if (a.IsEqual(b)) {
		cout << "Vector a and b are equal object" << endl;
	}
	else {
		cout << "Vector a and b are different object" << endl;
	}

	a.GetX();
	a.GetY();
	
	b.GetX();
	b.GetY();

	a.SetX(1);
	a.SetY(2);
	if (a.IsEqual(b)) {
		cout << "Vector a and b are equal object" << endl;
	}
	else {
		cout << "Vector a and b are different object" << endl;
	}

	a.Multiply(b);
	a.Multiply(3);

	a.Scale(b);
	a.Scale(3);

	return 0;
}