#pragma once

#include <iostream>

using namespace std;

namespace samples
{
	class MyString
	{
		friend ostream& operator<<(ostream& os, const MyString& rhs);

	public:
		MyString() = delete;
		MyString(const char* str);
		MyString(const MyString& other);//복사 생성자
		MyString(MyString&& other);//이동 생성자
		virtual ~MyString();

		MyString& operator=(MyString&& other);//이동 대입 연산자
		const char* GetString() const;
		int GetSize() const;

	private:
		char* mString;
		int mSize;
	};
}
