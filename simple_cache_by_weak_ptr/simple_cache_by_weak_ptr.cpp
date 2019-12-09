#include <iostream>
#include <memory>
#include <cassert>
#include "MyVector2D.h"
#include "SimpleCache.h"

using namespace samples;
using namespace std;

int main()
{
	shared_ptr<MyVector2D> vector1 = make_shared<MyVector2D>(0, 1);
	shared_ptr<MyVector2D> vector2 = make_shared<MyVector2D>(2, 5);
	shared_ptr<MyVector2D> vector3 = make_shared<MyVector2D>(8, 4);

	SimpleCache cache;

	cache.Add("Candy", vector1);
	cache.Add("IceCream", vector2);
	cache.Add("Chocolate", vector3);

	shared_ptr<MyVector2D> cachedVector2 = cache.Get("IceCream");//IceCream키의 공유 포인터 참조 카운트 2

	cout << "Usage of cachedVector2: " << cachedVector2.use_count() << endl;
	cout << "IceCream values X: " << cachedVector2->GetX() << ", Y: " << cachedVector2->GetY() << endl;//2, 5

	cache.Add("IceCream", vector3);

	cachedVector2 = cache.Get("IceCream");

	cout << "IceCream values X: " << cachedVector2->GetX() << ", Y: " << cachedVector2->GetY() << endl;//8, 4

	vector1 = nullptr;

	shared_ptr<MyVector2D> cachedVector1 = cache.Get("Candy");

	assert(cachedVector1 == nullptr);
 
	return 0;
}

