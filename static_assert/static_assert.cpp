#include "IntVector3D.h"
#include "IntVector4D.h"

using namespace samples;

int main()
{
	IntVector3D vector1;
	vector1.X = 9;
	vector1.Y = 10;
	vector1.Z = 3;

	//remove below comment if you want to test static_assert
	//static_assert(sizeof(vector1) == 16, "vector1 is not 16 bytes.");

	IntVector4D vector2;
	vector2.X = 2;
	vector2.Y = 3;
	vector2.Z = 1;
	vector2.W = 0;

	//remove below comment if you want to test static_assert
	//static_assert(sizeof(vector2) == 12, "vector2 is not 12 bytes");

	return 0;
}

