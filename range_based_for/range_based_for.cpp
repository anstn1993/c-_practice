#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> nums;
	nums.reserve(5);

	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);

	for (int n : nums) {//value copy
		n++;//do not change original vector element
	}

	cout << "Print nums: " << endl;

	for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
		cout << *iter << endl;
	}

	for (int& n : nums) {//value reference
		n--;//change original vector element
	}

	cout << "Print nums again: " << endl;

	for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
		cout << *iter << endl;
	}

	return 0;
}


