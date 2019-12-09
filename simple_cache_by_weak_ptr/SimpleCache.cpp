#include "SimpleCache.h"

namespace samples
{
	void SimpleCache::Add(string key, weak_ptr<MyVector2D> ptr)
	{
		auto it = mMap.find(key);

		if (it == mMap.end()) {//�ش� Ű�� �������� �ʴ� ���
			//���� ������ ����
			mMap.insert(pair<string, weak_ptr<MyVector2D>>(key, ptr));
			return;
		}

		//�̹� Ű�� �����ϸ� �� �����
		mMap[key] = ptr;
	}

	shared_ptr<MyVector2D> SimpleCache::Get(string key)
	{
		auto it = mMap.find(key);

		if (it == mMap.end()) {//Ű�� �������� �ʴ� ���
			return shared_ptr<MyVector2D>();//�� ���� �־ �� ������ ��ȯ
		}

		if (it->second.expired())//���� ���� ī��Ʈ�� 0�� ���
		{
			mMap.erase(it);//ĳ�ÿ��� ����
			return shared_ptr<MyVector2D>();//�� ������ ��ȯ
		}

		return it->second.lock();//�� ��� �� �ƴϸ� ���� �����ͷ� ��ȯ
	}
}