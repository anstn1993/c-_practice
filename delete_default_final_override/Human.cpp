#include <iostream>
#include "Human.h"

using namespace std;

namespace samples
{
	Human::Human(const char* name)//string ������ �Ű������� c��Ÿ�� ���ڿ��� ������ �Ҹ��ڿ��� ���� �޸� ������ �� �ʿ� ����. stringŬ������ �˾Ƽ� ó��
		:mName(string(name))
	{}

	void Human::SayMyName() const
	{
		cout << "My name is: " << mName << endl;
	}
}

