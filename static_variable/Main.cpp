#include <iostream>
#include "Cat2.h"

using namespace std;
using namespace samples;

int main()
{
	Cat2* myCat1 = new Cat2(2, "Noori");
	Cat2* myCat2 = new Cat2(4, "boksil");
	Cat2* myCat3 = new Cat2(5, "gary");
	Cat2* myCat4 = new Cat2(8, "cew");

	cout << "myCat1's type: " << myCat1->GetType() << endl;
	cout << "myCat2's type: " << myCat2->GetType() << endl;
	cout << "myCat3's type: " << myCat3->GetType() << endl;
	cout << "myCat4's type: " << myCat4->GetType() << endl;
	cout << "global cat type: " << Cat2::GetType() << endl;

	delete myCat1;
	delete myCat2;
	delete myCat3;
	delete myCat4;

	return 0;
}
