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
				iter = scores.erase(iter);//���� �̸��� �ڹ��� ��쿡 �� ��Ҹ� �����ϴµ� ������ ���� �ڸ����� ���� Data Comm�� �ڸ��ϰ� �ȴ�. �׷��� ++iter�� �ع����� Data Comm�� �ǳʶٱ� ������ while���� �� ��(for���� ���� erase�ϰ� ++iter�� ������ �ϴϱ�)
			}
			else {
				++iter;
			}
		}
		PrintVector(scores);

		cout << "After changing the score of class 1" << endl;
		for (vector<Score>::iterator iter = scores.begin(); iter != scores.end(); ++iter) {
			Score score = *iter;//������ �ƴ� �纻���� 
			if (score.GetScore() == 30) {
				score.SetScore(100);
			}
		}

		PrintVector(scores);//C++�� ������ ������ 30
	}

	void PrintVector(const vector<Score>& scores)
	{
		for (vector<Score>::const_iterator iter = scores.begin(); iter != scores.end(); ++iter) {
			iter->PrintVariables();
		}
		cout << endl;
	}
}