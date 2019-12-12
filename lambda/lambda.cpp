#include <string>
#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	float f = 1.0f;
	char c = 'b';

	auto noCapturing = []()
	{
		cout << "No Capturing: " << endl;

		//Compile error
		//cout << "i: " << i << endl;
		//cout << "f: " << f << endl;
		//cout << "c: " << c << endl;
	};

	auto capturedByValue = [=]()
	{
		cout << "Captured by value: " << endl;

		cout << "i: " << i << endl;
		cout << "f: " << f << endl;
		cout << "c: " << c << endl;

		//Compile error
		//i++;
		//f = 2.0f;
		//c = 'a';
	};

	auto capturedByRef = [&]()
	{
		cout << "Captured by reference: " << endl;

		cout << "i: " << i << endl;
		cout << "f: " << f << endl;
		cout << "c: " << c << endl;

		i++; 
		f++;
		c++;

		cout << "i: " << i << endl;
		cout << "f: " << f << endl;
		cout << "c: " << c << endl;

		i--;
		f--;
		c--;
		
	};

	auto capturedByVariableName = [i, f]()
	{
		cout << "Captured by variable names value: " << endl;

		cout << "i: " << i << endl;
		cout << "f: " << f << endl;

		//Compile error
		//cout << "c: " << c << endl;
		//i++;
		//f++;
		
	};

	auto capturedByVariableNamesRef = [&i, &f]()
	{
		cout << "Captured by variable names reference: " << endl;

		cout << "i: " << i << endl;
		cout << "f: " << f << endl;
		//Compile error
		//cout << "c: " << c << endl;

		i++;
		f++;

		cout << "i: " << i << endl;
		cout << "f: " << f << endl;

		i--;
		f--;
	};

	auto capturedByMix = [=, &f, &c]()
	{
		cout << "Captured by value by default, then by variable names reference" << endl;

		cout << "i: " << i << endl;
		cout << "f: " << f << endl;
		cout << "c: " << c << endl;
		//Compile error
		//i++;

		f++;
		c++;

		cout << "i: " << i << endl;
		cout << "f: " << f << endl;
		cout << "c: " << c << endl;

		f--;
		c--;
	};

	auto capturedByValueMutable = [=]() mutable
	{
		cout << "Captured by value with mutable specifier" << endl;

		i++;
		f++;
		c++;
	};

	capturedByValue();
	capturedByRef();
	capturedByVariableName();
	capturedByVariableNamesRef();
	capturedByMix();
	capturedByValueMutable();

	cout << "i: " << i << endl;
	cout << "f: " << f << endl;
	cout << "c: " << c << endl;
	
	return 0;
}

