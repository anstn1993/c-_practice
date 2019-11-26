#pragma once

namespace samples
{
	class String
	{
	public:
		String(const char* str);
		String(const String& str);/* 복사 생성자 */
		~String();/* 소멸자 */

		void Print();
	
	private:
		char* mString;
		size_t mSize;
	};
}