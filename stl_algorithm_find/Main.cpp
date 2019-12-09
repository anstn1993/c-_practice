#include <iostream>
#include "Algorithm.h"

using namespace std;
using namespace samples;

int main()
{
	const size_t ARRAY_SIZE = 10;
	int arr[ARRAY_SIZE] = {10, 20, 13, 52, 32, 67, 89, 15, 46, 3};

	const int* ptr = Algorithm::find(arr, arr + ARRAY_SIZE, 67);
	cout << *ptr;
	return 0;
}