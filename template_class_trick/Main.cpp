#include <iostream>
#include "IntVector.h"
#include "FixedVector.h"

using namespace std;
using namespace samples;

int main()
{
	FixedVector<int, 3> scores;
	scores.Add(10);
	scores.Add(50);

	cout << "scores - <size, capacity>: " << "<" << scores.GetSize() << ", " << scores.GetCapacity() << ">" << endl;

	FixedVector<IntVector, 5> intVectors;
	intVectors.Add(IntVector(2, 5));
	intVectors.Add(IntVector(4, 30));
	intVectors.Add(IntVector(22, 3));

	cout << "intVectors - <size, capacity>: " << "<" << intVectors.GetSize() << ", " << intVectors.GetCapacity() << ">" << endl;

	FixedVector<IntVector*, 4> intVectors2;

	IntVector* intVector = new IntVector(3, 2);
	intVectors2.Add(intVector);

	cout << "intVectors2 - <size, capacity>: " << "<" << intVectors2.GetSize() << ", " << intVectors2.GetCapacity() << ">" << endl;
	delete intVector;

	return 0;
}