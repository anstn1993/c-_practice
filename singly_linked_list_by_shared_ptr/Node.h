#pragma once

#include <memory>

using namespace std;

namespace samples
{
	class Node
	{
	public:
		Node() = delete;
		Node(int data);
		~Node() = default;

		void SetNext(const shared_ptr<Node> next);
		shared_ptr<Node> GetNext() const;//���� ��� get
		int GetData() const;//���� ����� �� get
	
	private:
		int mData;
		shared_ptr<Node> mNext;
	};
}