#include <iostream>
#include "Human.h"

using namespace std;

namespace samples
{
	Human::Human(const char* name)//string 생성자 매개변수로 c스타일 문자열을 넣으면 소멸자에서 따로 메모리 해제를 할 필요 없음. string클래스가 알아서 처리
		:mName(string(name))
	{}

	void Human::SayMyName() const
	{
		cout << "My name is: " << mName << endl;
	}
}

