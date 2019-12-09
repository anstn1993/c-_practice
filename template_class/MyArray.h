#pragma once

namespace samples
{
	template <typename T>
	class MyArray
	{
	public:
		MyArray();

		bool Add(const T& data);//개체의 크기가 엄청 클 경우를 대비하여 주소로만 받는 참조형을 선택. 값형의 경우 비효율적이긴 하나 그걸 감수
		size_t GetSize() const;

	private:
		enum { MAX = 3 };
		size_t mSize;
		T mArray[MAX];
	};

	//구현체도 헤더 파일에 작성

	template <typename T>
	MyArray<T>::MyArray()
		:mSize(0)
	{}

	template<typename T>
	bool MyArray<T>::Add(const T& data)
	{
		if (mSize >= MAX) {
			return false;
		}

		mArray[mSize++] = data;
		return true;
	}

	template<typename T>
	size_t MyArray<T>::GetSize() const
	{
		return mSize;
	}

}