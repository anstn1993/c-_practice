#include <iostream>
#include <vector>
#include "VectorAdding.h"

using namespace std;

namespace samples
{
	void VectorAdding()
	{
		vector<int> scores;
		scores.reserve(5);//�뷮�� �ٷ� �����ؼ� ����ȭ

		scores.push_back(30);
		scores.push_back(50);
		scores.push_back(80);
		scores.push_back(65);
		scores.push_back(73);

		PrintScores(scores);

		scores.pop_back();
		scores.pop_back();
			
		PrintScores(scores);

		//�뷮�� �Ű������� ���� ���ڷ� �缳���ϰ� ��� �ִ� ������ 0���� �ʱ�ȭ�ϴ� �޼ҵ�
		//���� �뷮���� ���� ���� ������ �뷮�� ���� ���� �ִ�. 
		scores.resize(10);

		PrintScores(scores);
	}

	void PrintScores(const vector<int>& scores)
	{
		cout << "Current elements: ";
		//scores�� const�̱� ������ �ݺ��ڵ� const�� ����ؾ� �Ѵ�. �ƴϸ� ������ ����. ���� �ٲ� �� ����. 
		for (vector<int>::const_iterator iter = scores.begin(); iter != scores.end(); ++iter) {
			cout << *iter << " ";
		}
		cout << endl;

		cout << "Current capacity: " << scores.capacity() << endl;
		cout << "Current size: " << scores.size() << endl;
	}
}