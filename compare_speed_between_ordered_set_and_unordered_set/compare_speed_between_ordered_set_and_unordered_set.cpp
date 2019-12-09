#include <iostream>
#include <set>
#include <unordered_set>
#include <chrono>

using namespace std;

int main()
{
	//Run this code in release config

	set<int> orderedSet;
	unordered_set<int> unorderedSet;
	
	const int NUMBER_TO_INSERT_LATER = 1023;
	const int MAX_NUMBER_IN_SET = 100000;

	unorderedSet.reserve(MAX_NUMBER_IN_SET);

	static_assert(MAX_NUMBER_IN_SET > NUMBER_TO_INSERT_LATER, "MAX_NUMBER_IN_SET should be greater than NUMBER_TO_INSERT_LATER");

	for (int i = 0; i < MAX_NUMBER_IN_SET; ++i) {
		if (i == NUMBER_TO_INSERT_LATER) {
			continue;
		}

		orderedSet.insert(i);
		unorderedSet.insert(i);
	}

	auto start = chrono::high_resolution_clock::now();//현재 시간을 정밀 시간으로 반환
	orderedSet.insert(NUMBER_TO_INSERT_LATER);
	auto end = chrono::high_resolution_clock::now();//현재 시간을 정밀 시간으로 반환

	auto elapsedNanoSeconds = end - start;

	cout << "Inserting into orderedSet: " << elapsedNanoSeconds.count() << "ns" << endl;

	start = chrono::high_resolution_clock::now();
	unorderedSet.insert(NUMBER_TO_INSERT_LATER);
	end = chrono::high_resolution_clock::now();

	elapsedNanoSeconds = end - start;

	cout << "Inserting into unorderedSet: " << elapsedNanoSeconds.count() <<  "ns" << endl;

	//Uncomment this when you run it with Release config
	//system("pause");

	return 0;
}
