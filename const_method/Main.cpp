#include "Vector2.h"

int main()
{
	Vector2 mine;
	Vector2 other(2, 3);
	mine.GetX();
	mine.GetY();
	mine.SetX(1);
	mine.SetY(2);
	mine.Add(other);
	return 0;
}