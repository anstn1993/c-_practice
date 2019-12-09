#include <iostream>
#include <map>
#include <string>
#include "MapInsert.h"

using namespace std;

namespace samples
{
	void MapInsert()
	{
		map<string, int> studentScores;

		studentScores.insert(pair<string, int>("Lulu", 10));
		studentScores.insert(pair<string, int>("Poppy", 10));

		for (map<string, int>::iterator iter = studentScores.begin(); iter != studentScores.end(); ++iter) {
			cout << iter->first << ", " << iter->second << endl;

		}
		cout << endl;

		studentScores.insert(pair<string, int>("Lulu", 100));


		for (map<string, int>::iterator iter = studentScores.begin(); iter != studentScores.end(); ++iter) {
			cout << iter->first << ", " << iter->second << endl;

		}
	}
}