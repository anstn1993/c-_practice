#include <iostream>
#include <vector>
#include "VectorAdding.h"

using namespace std;

namespace samples
{
	void VectorAdding()
	{
		vector<int> scores;
		scores.reserve(5);//용량을 바로 설정해서 최적화

		scores.push_back(30);
		scores.push_back(50);
		scores.push_back(80);
		scores.push_back(65);
		scores.push_back(73);

		PrintScores(scores);

		scores.pop_back();
		scores.pop_back();
			
		PrintScores(scores);

		//용량을 매개변수로 들어온 숫자로 재설정하고 비어 있는 공간은 0으로 초기화하는 메소드
		//실제 용량보다 작은 수를 넣으면 용량을 줄일 수도 있다. 
		scores.resize(10);

		PrintScores(scores);
	}

	void PrintScores(const vector<int>& scores)
	{
		cout << "Current elements: ";
		//scores가 const이기 때문에 반복자도 const로 사용해야 한다. 아니면 컴파일 에러. 값을 바꿀 수 없다. 
		for (vector<int>::const_iterator iter = scores.begin(); iter != scores.end(); ++iter) {
			cout << *iter << " ";
		}
		cout << endl;

		cout << "Current capacity: " << scores.capacity() << endl;
		cout << "Current size: " << scores.size() << endl;
	}
}