#include "SimpleCache.h"

namespace samples
{
	void SimpleCache::Add(string key, weak_ptr<MyVector2D> ptr)
	{
		auto it = mMap.find(key);

		if (it == mMap.end()) {//해당 키가 존재하지 않는 경우
			//약한 포인터 삽입
			mMap.insert(pair<string, weak_ptr<MyVector2D>>(key, ptr));
			return;
		}

		//이미 키가 존재하면 값 덮어쓰기
		mMap[key] = ptr;
	}

	shared_ptr<MyVector2D> SimpleCache::Get(string key)
	{
		auto it = mMap.find(key);

		if (it == mMap.end()) {//키가 존재하지 않는 경우
			return shared_ptr<MyVector2D>();//빈 값을 넣어서 널 포인터 반환
		}

		if (it->second.expired())//강한 참조 카운트가 0인 경우
		{
			mMap.erase(it);//캐시에서 제거
			return shared_ptr<MyVector2D>();//널 포인터 반환
		}

		return it->second.lock();//두 경우 다 아니면 공유 포인터로 반환
	}
}