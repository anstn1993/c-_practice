#include <iostream>
#include <map>
#include <string> 
#include "MapUserDefinedType.h"
#include "StudentInfo.h"

using namespace std;

namespace samples
{
	void MapUserDefinedType()
	{
		map<StudentInfo, int> studentScores;

		studentScores.insert(pair<StudentInfo, int>(StudentInfo("Lulu", "A01234567"), 10));
		studentScores.insert(pair<StudentInfo, int>(StudentInfo("Poppy", "A12345678"), 70));
		studentScores.insert(pair<StudentInfo, int>(StudentInfo("Lulu", "A01234567"), 50));//�������� ���Ա� ������ ù��° insert�� ��ü�� ���� ������ Ű->return false

		for (map<StudentInfo, int>::iterator iter = studentScores.begin(); iter != studentScores.end(); ++iter) {
			cout << iter->first.GetName() << "[" << iter->first.GetStudentID() << "]: " << iter->second << endl;
		}
	}
}