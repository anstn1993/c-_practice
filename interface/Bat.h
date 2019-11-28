#pragma once

#include "IWalkable.h"
#include "IFlyable.h"

namespace samples
{
	class Bat :public IFlyable, public IWalkable
	{
	public:
		void Fly() const;
		void Walk() const; 
	};
}