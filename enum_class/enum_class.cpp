#include "Ball.h"
#include "EColor.h"

using namespace samples;

int main()
{
	Ball ball1(eColor::Red);
	Ball ball2(eColor::Green);
	Ball ball3(eColor::Blue);

	Ball* ptr = &ball1;

	ball1.SayColor();
	ball2.SayColor();
	ball3.SayColor();

	return 0;
}

