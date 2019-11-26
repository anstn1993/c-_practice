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
	Record ReadRecord(std::istream& stream, bool bPrompt);/* istream은 file이 될 수도 있고 cin도 될 수 있다. bPrompt는 파일에서 값을 가져올 때랑 cin을 통해 값을 가져올 때를 구분해주는 변수*/

	void WriteFileRecord(std::fstream& outputstream, const Record& record);/* 파일 스트림에 레코드를 쓴다. */
	
	void DisplayRecords(std::fstream& fileStream);/* 파일을 읽어와서 처음부터 보여주는 용도 */

	void ManageRecordsExample();/* 진입점 */
}