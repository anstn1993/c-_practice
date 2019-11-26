#include <iostream>
#include <string>
#include "Mirrorstring.h"

using namespace std;

namespace samples
{
	void MirroStringExample()
	{
		cout << "+--------------------------------+" << endl;
		cout << "|          Mirror String         |" << endl;
		cout << "+--------------------------------+" << endl;


		string line = "Hello World";

		cout << "string to mirror: " << line << endl;

		for (int i = (int)line.size()-1; i >= 0; --i) {
			line += line[i];
		}
		cout << "mirrored string: " << line << endl;
	}
}