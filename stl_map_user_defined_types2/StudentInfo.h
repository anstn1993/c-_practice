#pragma once

#include <iostream>

using namespace std;

namespace samples
{
	class StudentInfo
	{
	public:
		StudentInfo(const string& name, const string& studentID);

		const string& GetName() const;
		const string& GetStudentID() const;

		bool operator<(const StudentInfo& object) const;//비교 연산자 오버로팅을 통해서 사용자 정의 개체가 키로 사용될 때 맵이 정렬을 할 수 있게 해준다.
	private:
		string mName;
		string mStudentID;
	};
}