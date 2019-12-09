#include <vector>
#include <iostream>
#include "MyVector.h"

using namespace samples;
using namespace std;

int main()
{
	int* numPtr = new int(5);
	auto autoNumPtr = numPtr;//Bad Practice

	cout << "autoNumPtr: " << *autoNumPtr << endl;

	auto* goodAutoNumPtr = numPtr;//Good Practice

	cout << "goodAutoNumPtr: " << *goodAutoNumPtr << endl;

	autoNumPtr = nullptr;
	goodAutoNumPtr = nullptr;
	delete numPtr;//free 

	char character = 'a';
	char& characterRef = character;
	auto characterAutoCopy = characterRef;//Bad Practice

	character = 'b';

	cout << "characterAutoCopy" << characterAutoCopy << endl;

	char anotherCharacter = 'c';
	char& anotherCharacterRef = anotherCharacter;
	auto& anotherCharacterAutoRef = anotherCharacterRef;//Good Praactice

	cout << "anotherCharacterAutoRef: " << anotherCharacterAutoRef << endl;

	const float someFloat = 1.0f;
	auto& someFloatRef = someFloat;//Bad Practice

	//Compile Error
	// someFloatRef = 2.0f;

	const auto& goodSomeFloatRef = someFloat;//Good Practice

	cout << "goodSomeFloatRef: " << goodSomeFloatRef << endl;

	vector<int> intVector;
	intVector.reserve(3);

	intVector.push_back(1);
	intVector.push_back(2);
	intVector.push_back(3);

	for (auto iter = intVector.begin(); iter != intVector.end(); ++iter) {
		cout << "Number in intVector: " << *iter << endl;
	}

	auto* myVector = new MyVector<int>(10, 20);

	cout << "mX: " << myVector->GetX() << ", mY: " << myVector->GetY() << endl;
	delete myVector;
	return 0;
}
