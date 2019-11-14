#pragma once
#include "../WeekManagerBase.h"

class Week7Manager : public WeekManagerBase
{
public:
	Week7Manager();
	~Week7Manager();

public:
	virtual void Main() override;

private:
	void RefTest();
	void SwapTest();
	void DefaultParamTest(int num1, int num2 = 10, int num3 = 20);
	void OverloadingTest(int num1);
	void OverloadingTest(float num1);
	void OverloadingTest(double num1);

	template <typename T>
	void PrintValueData(T var1, T var2);

	template <typename T>
	void SwapPointingValue(T* var1, T* var2);

	template <typename T>
	void SwapPointingAddress(T** var1, T** var2);
};

