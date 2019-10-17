#pragma once
#include "../WeekManagerBase.h"

class Week7Manager : public WeekManagerBase
{
public:
	Week7Manager();
	~Week7Manager();

public:
	void Main();

private:
	void RefTest();
	void SwapTest();

	template <typename T>
	void Swap(T* var1, T* var2);
};

