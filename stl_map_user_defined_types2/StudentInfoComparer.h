#pragma once

#include "StudentInfo.h"

namespace samples
{
	class StudentInfoComparer
	{
	public:
		bool operator()(const StudentInfo& object1, const StudentInfo& object2) const//연산자에 자기 자신이 없기 때문에 매개변수에 피 연산자 두 개를 다 넣어줌
		{
			if (object1.GetName() == object2.GetName()) {
				return object1.GetStudentID() < object2.GetStudentID();
			}

			return object1.GetName() < object2.GetName();
		}
	};
}