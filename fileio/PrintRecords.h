#pragma once

#include <iostream>
#include <string>

struct Record
{
	std::string FirstName;
	std::string LastName;
	std::string StudentID;
	std::string Score;
};

namespace samples
{
	Record ReadRecord(std::istream& stream, bool bPrompt);/* istream�� file�� �� ���� �ְ� cin�� �� �� �ִ�. bPrompt�� ���Ͽ��� ���� ������ ���� cin�� ���� ���� ������ ���� �������ִ� ����*/

	void WriteFileRecord(std::fstream& outputstream, const Record& record);/* ���� ��Ʈ���� ���ڵ带 ����. */
	
	void DisplayRecords(std::fstream& fileStream);/* ������ �о�ͼ� ó������ �����ִ� �뵵 */

	void ManageRecordsExample();/* ������ */
}