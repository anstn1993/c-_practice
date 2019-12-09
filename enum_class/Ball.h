#pragma once
#include "EColor.h"

namespace samples
{
	class Ball
	{
	public:
		Ball() = delete;
		Ball(eColor color);
		~Ball() = default;

		eColor GetColor() const;
		void SayColor() const;
	private:
		eColor mColor;
	};
}