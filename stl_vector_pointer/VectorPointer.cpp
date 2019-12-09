#include <iostream>
#include <vector>
#include "Score.h"
#include "VectorPointer.h"

using namespace std;

namespace samples
{
	void VectorPointer()
	{
		vector<Score*> scores;//개체의 포인터 저장
		scores.reserve(5);

		Score* cppScore = new Score(30, "C++");
		Score* algoScore = new Score(59, "Algorithm");
		Score* javaScore = new Score(87, "Java");
		Score* dataCommScore = new Score(74, "Data Comm");
		Score* androidScore = new Score(41, "Android");

		scores.push_back(cppScore);
		scores.push_back(algoScore);
		scores.push_back(javaScore);
		scores.push_back(dataCommScore);
		scores.push_back(androidScore);

		PrintVector(scores);

		vector<Score*>::iterator iter = scores.begin();
		while (iter != scores.end()) {
			Score* score = *iter;
			if (score->GetClassName() == "Java") {
				iter = scores.erase(iter);
			}
			else {
				++iter;
			}
		}

		PrintVector(scores);

		for (vector<Score*>::iterator iter = scores.begin(); iter != scores.end(); ++iter) {
			Score* score = *iter;//개체를 가리키는 포인터를 받아오기 때문에 

			if (score->GetScore() == 30) {
				score->SetScore(100);//원본이 바뀜
			}
		}

		cout << "After changing the score of class 1" << endl;
		PrintVector(scores);//C++ 100점

		delete cppScore;
		delete algoScore;
		delete javaScore;
		delete dataCommScore;
		delete androidScore;

		/*
		for (vector<Score*>::iterator iter = scores.begin(); iter != scores.end(); ++iter) {
			delete *iter;
		}
		*/

	}

	void PrintVector(const vector<Score*>& scores)
	{
		for (vector<Score*>::const_iterator iter = scores.begin(); iter != scores.end(); ++iter) {
			Score* score = *iter;
			score->PrintVariables();
		}

		cout << endl;
	}
}