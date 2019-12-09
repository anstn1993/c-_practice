#pragma once

#include <string>

namespace samples
{
	class Human
	{
	public:
		Human() = delete;//�⺻ ������ ����
		Human(const char* name);

		//�⺻ �Ҹ��ڷ� ���ٴ� �� �� Ŭ���� �ȿ��� �߰��� �޸� �Ҵ��� ���� �ʴ´ٴ� ���̴�.
		//�׷��� name�� char�����ʹ�. �� ���� std::stringŬ������ ���ڴٴ� ���� �ǹ��Ѵ�. 
		virtual ~Human() = default;

		virtual void SayMyName() const;

	protected://�ڽ� Ŭ���� ��ü������ ���� ����
		std::string mName;

	};
}