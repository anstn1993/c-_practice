#include <iostream>
#include <cassert>
#include "MyString.h"

using namespace std;
using namespace samples;

MyString MakeMyString()
{
	MyString tempString("Hello");
	return tempString;
}

int main()
{
	MyString originalString("String1");//일반적인 생성자

	MyString copyConstructorString(originalString);//복사 생성자

	cout << originalString << endl;
	cout << copyConstructorString << endl;

	MyString moveConstructorString(MakeMyString());//이동 생성자

	cout << moveConstructorString << endl;

	moveConstructorString = move(originalString);//이동 대입 연산자

	assert(originalString.GetString() == nullptr);
	assert(originalString.GetSize() == 0);

	cout << moveConstructorString << endl;

	return 0;
}



