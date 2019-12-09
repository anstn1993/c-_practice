#include <iostream>
#include <vector>
#include "VectorObject.h"
#include "Score.h"

using namespace std;

namespace samples
{
	void VectorObject() 
	{
		vector<Score> scores;
		scores.reserve(5);

		scores.push_back(Score(30, "C++"));
		scores.push_back(Score(59, "Algorithm"));
		scores.push_back(Score(87, "Java"));
		scores.push_back(Score(74, "Data Comm"));
		scores.push_back(Score(41, "Android"));

		cout << "Before erasing the element" << endl;
		PrintVector(scores);

		cout << "After erasing the element" << endl;

		vector<Score>::iterator iter = scores.begin();
		while (iter != scores.end()) {
			if (iter->GetClassName() == "Java") {
				iter = scores.erase(iter);//과목 이름이 자바인 경우에 그 요소를 삭제하는데 삭제한 색인 자리에는 이제 Data Comm가 자리하게 된다. 그래서 ++iter을 해버리면 Data Comm을 건너뛰기 때문에 while문을 쓴 것(for문을 쓰면 erase하고 ++iter를 무조건 하니까)
			}
			else {
				++iter;
			}
		}
		PrintVector(scores);

		cout << "After changing the score of class 1" << endl;
		for (vector<Score>::iterator iter = scores.begin(); iter != scores.end(); ++iter) {
			Score score = *iter;//원본이 아닌 사본으로 
			if (score.GetScore() == 30) {
				score.SetScore(100);
			}
		}

		PrintVector(scores);//C++의 점수는 여전히 30
	}

	void PrintVector(const vector<Score>& scores)
	{
		for (vector<Score>::const_iterator iter = scores.begin(); iter != scores.end(); ++iter) {
			iter->PrintVariables();
		}
		cout << endl;
	}
}