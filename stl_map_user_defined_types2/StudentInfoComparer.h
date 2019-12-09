#pragma once

#include "StudentInfo.h"

namespace samples
{
	class StudentInfoComparer
	{
	public:
		bool operator()(const StudentInfo& object1, const StudentInfo& object2) const//�����ڿ� �ڱ� �ڽ��� ���� ������ �Ű������� �� ������ �� ���� �� �־���
		{
			if (object1.GetName() == object2.GetName()) {
				return object1.GetStudentID() < object2.GetStudentID();
			}

			return object1.GetName() < object2.GetName();
		}
	};
}