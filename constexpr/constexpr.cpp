#include <iostream>
#include "SimpleHashMap.h"

using namespace samples;
using namespace std;

constexpr unsigned long HashFunction(const char* s)//아주 간단한 해쉬 함수, constexpr함수이기 때문에 컴파일 단계에서 평가 끝
{
	int i = 0; 
	unsigned long sum = 0;
	while (s[i] != '\0') {
		sum += s[i++];
	}

	return sum;
}

//strlen()함수는 런타임에만 평가할 수 있기 때문에 constexpr 함수의 구현체로 들어가면 컴파일 에러
//constexpr unsigned long HashFunctionWithCompileError(const char* s)
//{
//	size_t length = strlen(s);
//
//	int sum = 0;
//
//	for (int i = 0; i < length; ++i)
//	{
//		sum += s[i];
//	}
//
//	return sum;
//}

int main()
{
	SimpleHashMap map;

	constexpr unsigned long test1 = HashFunction("test1");
	//constexpr unsigned long doesNotWork = HashFunctionWithCompileError("test1");


	map.Add("test1", test1, 1);
	map.Add("test2", HashFunction("test2"), 2);
	map.Add("test3", HashFunction("test3"), 3);
	map.Add("test4", HashFunction("test4"), 4);
	map.Add("test5", HashFunction("test5"), 5);

	map.Print();

	map.Add("test1", HashFunction("test1"), 10);
	map.Add("test5", HashFunction("test5"), 100);

	cout << map.Get("test2", HashFunction("test2")) << endl;
	cout << map.Get("nokey", HashFunction("nokey")) << endl;

	return 0;
}
