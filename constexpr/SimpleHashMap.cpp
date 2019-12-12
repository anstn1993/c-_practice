#include <string>
#include <algorithm>
#include <iostream>
#include "SimpleHashMap.h"

namespace samples
{
	void SimpleHashMap::Add(const char* key, unsigned long hash, int value)
	{
		shared_ptr<Node> newNode = make_shared<Node>(key, value);

		int index = hash % MAX_SIZE;

		if (mArray[index] == nullptr)//해당 색인이 비어있는 경우
		{
			mArray[index] = newNode;//노트 추가
			return;
		}

		shared_ptr<Node> current = mArray[index];
		if (current->GetKey() == key)//현재 색인에 있는 키와 동일한 경우
		{
			newNode->SetNext(current->GetNext());//추가되는 노드가 현재 노드의 다음 노드를 가리키게 하고
			mArray[index] = newNode;//현재 색인에 추가되는 노드를 삽입
			return;
		}

		//현재 색인에 있는 키와 동일하지 않으면 그 색인의 연결 리스트를 순회하면서 중복 키가 있는지 확인하고 있는 경우 사이에 삽입
		while (current->GetNext() != nullptr)
		{
			if (current->GetNext()->GetKey() == key)
			{
				newNode->SetNext(current->GetNext()->GetNext());
				current->SetNext(newNode);
				return;
			}

			current = current->GetNext();
		}

		current->SetNext(newNode);//연결리스트에도 중복되는 키가 없으면 그냥 바로 해당 색인의 연결리스트 마지막에 추가
	}

	int SimpleHashMap::Get(const char* key, unsigned long hash) const
	{
		int index = hash % MAX_SIZE;

		if (mArray[index] == nullptr)
		{
			return -1;
		}

		shared_ptr<Node> current = mArray[index];

		while (current != nullptr)
		{
			if (current->GetKey() == key)
			{
				return current->GetData();
			}

			current = current->GetNext();
		}

		return -1;
	}

	void SimpleHashMap::Print() const
	{
		for (int i = 0; i < MAX_SIZE; ++i) 
		{
			if (mArray[i] != nullptr)
			{
				shared_ptr<Node> current = mArray[i];

				while (current != nullptr) {
					cout << "key: " << current->GetKey() << ", value: " << current->GetData() << endl;
					current = current->GetNext();
				}
			}
		}
	}
}