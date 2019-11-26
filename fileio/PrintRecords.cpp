#include <fstream>
#include <iomanip>
#include "PrintRecords.h"

using namespace std;

namespace samples
{
	Record ReadRecord(istream& stream, bool bPrompt)/* istream은 file이 될 수도 있고 cin도 될 수 있다. bPrompt는 파일에서 값을 가져올 때랑 cin을 통해 값을 가져올 때를 구분해주는 변수*/
	{
		Record record;

		if (bPrompt) {
			cout << "First name: ";
		}
		stream >> record.FirstName;

		if (bPrompt) {
			cout << "Last name: ";
		}
		stream >> record.LastName;
		
		if (bPrompt)
		{
			cout << "Student ID: ";
		}
		stream >> record.StudentID;
		
		if (bPrompt) {
			cout << "Score: ";
		}
		stream >> record.Score;

		return record;
	}

	void WriteFileRecord(fstream& outputStream, const Record& record)/* 파일 스트림에 레코드를 쓴다. */
	{
		outputStream.seekp(0, ios_base::end);/* 파일의 맨 끝에 학생 정보 추가 */

		outputStream << record.FirstName << " "
			<< record.LastName << " "
			<< record.StudentID << " "
			<< record.Score << endl;

		outputStream.flush();
	}

	void DisplayRecords(fstream& fileStream)/* 파일을 읽어와서 처음부터 보여주는 용도 */
	{
		fileStream.seekg(0);/* 읽기 포인터를 제일 처음으로 이동 */

		string line;
		while (true) {
			getline(fileStream, line);

			if (fileStream.eof()) {
				fileStream.clear();
				break;
			}

			cout << line << endl;
		}
	}

	void ManageRecordsExample()/* 진입점 */
	{
		cout << "+------------------------------+" << endl;
		cout << "|    Manage Records Example    |" << endl;
		cout << "+------------------------------+" << endl;
		
		fstream fileStream;
		fileStream.open("studentRecords.dat", ios_base::out | ios_base::in);

		bool bExit = false;

	
		while(!bExit){
			char command = ' ';

			cout << "a: add" << endl
				<< "d: display" << endl
				<< "x: exit" << endl;

			cin >> command;
			cin.ignore(LLONG_MAX, '\n');/* 하나의 문자만 읽었으므로 그 후의 모든 문자를 버린다. */

			switch (command)
			{
				case 'a':
				{
					Record record = ReadRecord(cin, true);
					WriteFileRecord(fileStream, record);
					break;
				}
				case 'd':
				{
					DisplayRecords(fileStream);
					break;
				}
				case 'x':
				{
					bExit = true;
					break;
				}
				default:
					cout << "invalid input" << endl;
					break;
			}
		}
		
		fileStream.close();
	}
}