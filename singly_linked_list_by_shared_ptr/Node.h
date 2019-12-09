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
		shared_ptr<Node> GetNext() const;//다음 노드 get
		int GetData() const;//현재 노드의 값 get
	
	private:
		int mData;
		shared_ptr<Node> mNext;
	};
}