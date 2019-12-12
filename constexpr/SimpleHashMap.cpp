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

		if (mArray[index] == nullptr)//�ش� ������ ����ִ� ���
		{
			mArray[index] = newNode;//��Ʈ �߰�
			return;
		}

		shared_ptr<Node> current = mArray[index];
		if (current->GetKey() == key)//���� ���ο� �ִ� Ű�� ������ ���
		{
			newNode->SetNext(current->GetNext());//�߰��Ǵ� ��尡 ���� ����� ���� ��带 ����Ű�� �ϰ�
			mArray[index] = newNode;//���� ���ο� �߰��Ǵ� ��带 ����
			return;
		}

		//���� ���ο� �ִ� Ű�� �������� ������ �� ������ ���� ����Ʈ�� ��ȸ�ϸ鼭 �ߺ� Ű�� �ִ��� Ȯ���ϰ� �ִ� ��� ���̿� ����
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

		current->SetNext(newNode);//���Ḯ��Ʈ���� �ߺ��Ǵ� Ű�� ������ �׳� �ٷ� �ش� ������ ���Ḯ��Ʈ �������� �߰�
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