#include <memory>
#include <iostream>
#include "MyVector.h"

using namespace samples;
using namespace std;

int main()
{
	//primitive type pointer
	unique_ptr<int> num1 = make_unique<int>(10);
	unique_ptr<char> char1 = make_unique<char>('a');

	cout << *num1 << endl;
	cout << *char1 << endl;

	unique_ptr<MyVector> myVector = make_unique<MyVector>(3, 5);
	cout << "X: " << myVector->GetX() << ", Y: " << myVector->GetY() << endl;

	//Compile error
	//unique_ptr<MyVector> copyMyVector1 = myVector;
	//unique_ptr<MyVector> copyMyVector2(myVector);

	myVector.reset(new MyVector(1, 5));

	cout << "X: " << myVector->GetX() << ", Y: " << myVector->GetY() << endl;

	num1.reset();
	myVector = nullptr;

	unique_ptr<char> char2(move(char1));

	//Run-tile error
	//cout << "char1: " << *char1 << endl;
	cout << "char2: " << *char2 << endl;

	const unique_ptr<float> float1 = make_unique<float>(2.0f);
	
	//Compile error because float1 is const variable
	//unique_ptr<float> float2(move(float1));
	//float1.reset(new float(1.0f));

	return 0;
}

