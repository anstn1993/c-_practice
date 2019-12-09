#include <iostream>
#include "MyArray.h"
#include "IntVector.h"

using namespace samples;
using namespace std;

int main()
{
	MyArray<int> scores;//int도 참조형으로 들어감
	scores.Add(10);
	scores.Add(50);

	cout << "scores - size: " << scores.GetSize() << endl;

	MyArray<IntVector> intVectors;
	intVectors.Add(IntVector(1, 1));
	intVectors.Add(IntVector(5, 3));

	cout << "intVectors - size: " << intVectors.GetSize() << endl;

	MyArray<IntVector*> intVectors2;
	IntVector* intVector = new IntVector(3, 2);
	intVectors2.Add(intVector);

	cout << "intVectors2 - size: " << intVectors2.GetSize() << endl;
	delete intVector;
	return 0;
}