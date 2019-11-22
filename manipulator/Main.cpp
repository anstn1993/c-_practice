#include <iostream>
#include <iomanip>

using namespace std;

void PrintMenu()
{
	const float coffeePrice = 1.25f;
	const float lattePrice = 4.75f;
	const float breakfastComboPrice = 12.104f;

	const size_t nameColumnLength = 20;
	const size_t priceColumnLength = 10;

	cout << left << fixed << showpoint << setprecision(2);//조정자를 이런 식으로 한 번 사용해두면 그 뒤로 출력되는 건 다 이 형식으로 출력됨

	cout << setfill('-') << setw(nameColumnLength + priceColumnLength) << "" << endl << setfill(' ');
	cout << setw(nameColumnLength) << "Name"
		<< setw(priceColumnLength) << "Price" << endl;
	cout << setfill('-') << setw(nameColumnLength + priceColumnLength) << "" << endl << setfill(' ');

	cout << setw(nameColumnLength) << "Coffee" << "$" << coffeePrice << endl;
	cout << setw(nameColumnLength) << "Latte" << "$" << lattePrice << endl;
	cout << setw(nameColumnLength) << "Breakfast Combo" << "$" << breakfastComboPrice << endl;
}

int main()
{
	PrintMenu();
	return 0;
}
