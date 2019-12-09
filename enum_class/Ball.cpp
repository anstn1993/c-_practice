#include "Ball.h"
#include "EColor.h"
#include <iostream>

using namespace std;

namespace samples
{
	Ball::Ball(eColor color)
		:mColor(color)
	{}

	eColor Ball::GetColor() const
	{
		return mColor;
	}

	void Ball::SayColor() const
	{
		switch(mColor)
		{
		case eColor::Red:
			cout << "I'm Red!!" << endl;
			break;
		case eColor::Green:
			cout << "I'm Green!!" << endl;
			break;
		case eColor::Blue:
			cout << "I'm Blue!!" << endl;
			break;
		default:
			cout << "I Don't know what color i am!!" << endl;
			break;
		}
	}
}