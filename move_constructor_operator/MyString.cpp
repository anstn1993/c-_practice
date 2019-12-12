#include <iostream>
#include "MyString.h"

using namespace std;

namespace samples
{
	MyString::MyString(const char* str)
		:mSize(strlen(str) + 1)
	{
		mString = new char[mSize];
		memcpy(mString, str, mSize);
	}

	MyString::MyString(const MyString& other)
		:mSize(other.mSize)
	{
		//not common pattern
		//cout << "Calling copy constructor" << endl;
		mString = new char[mSize];
		memcpy(mString, other.mString, mSize);
	}

	MyString::MyString(MyString&& other)//이동 생성자
		:mString(other.mString)
		,mSize(other.mSize)
	{
		//not common pattern
		//cout << "Calling move constructor" << endl;

		other.mString = nullptr;
		other.mSize = 0;
	}

	MyString::~MyString()
	{
		delete[] mString;
	}

	MyString& MyString::operator=(MyString&& other)
	{
		//not common pattern
		//cout << "Calling move assignment" << endl;

		if (this != &other) {
			mString = other.mString;
			mSize = other.mSize;

			other.mString = nullptr;
			other.mSize = 0;
		}

		return *this;
	}

	const char* MyString::GetString() const
	{
		return mString;
	}

	int MyString::GetSize() const
	{
		return mSize;
	}

	ostream& operator<<(ostream& os, const MyString& rhs)
	{
		for (int i = 0; i < rhs.mSize; ++i) {
			os << rhs.mString[i];
		}
		return os;
	}
}

