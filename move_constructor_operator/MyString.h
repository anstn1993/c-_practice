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
		MyString(const MyString& other);//���� ������
		MyString(MyString&& other);//�̵� ������
		virtual ~MyString();

		MyString& operator=(MyString&& other);//�̵� ���� ������
		const char* GetString() const;
		int GetSize() const;

	private:
		char* mString;
		int mSize;
	};
}
