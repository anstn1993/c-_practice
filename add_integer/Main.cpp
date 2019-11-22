#include <iostream>

using namespace std;

void AddIntegers()
{
	cout << "+--------------------------------+" << endl;
	cout << "|          Add Integers          |" << endl;
	cout << "+--------------------------------+" << endl;

	int number;
	int sum = 0;

	while (true) {
		cout << "enter an integer or EOF"; 
		cin >> number;
		if (cin.eof()) {
			cout << "you entered EOF" << endl;
			break;
		}
		if (cin.fail()) {
			cout << "invalid value" << endl;
			cin.clear();
			cin.ignore(LLONG_MAX, '\n');
			continue;
		}

		sum += number;
	}
	cin.clear();

	cout << "The sum is " << sum << endl;
}

void ReverseInputString()
{
	cout << "+--------------------------------+" << endl;
	cout << "|         Reverse String         |" << endl;
	cout << "+--------------------------------+" << endl;

	const int LINE_SIZE = 512;
	char line[LINE_SIZE];

	cout << "Enter a string to reverse" << "or EOF to quit";
	cin.getline(line, LINE_SIZE);
	if (cin.fail()) {//문자열의 경우 eof도 fail이다. 
		cin.clear();
		return;
	}

	char* p = line;
	char* q = p + strlen(line) - 1;
	while (p < q) {
		char tmp = *p;
		*p = *q;
		*q = tmp;
		++p;
		--q;
	}

	cout << "Reversed string: " << line << endl;

	
}

int main()
{
	AddIntegers();
	ReverseInputString();
	return 0;
}
