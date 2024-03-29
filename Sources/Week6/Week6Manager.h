#pragma once
#include "../WeekManagerBase.h"

class Week6Manager : public WeekManagerBase
{
public:
	Week6Manager();
	~Week6Manager();

private:
	struct TestStruct {
		int i;
		float f;
		char c;
	};
	struct TestStruct _testStruct;

	//
	int* p;

public:
	virtual void Main() override;

private:
	void StructTest();
	void DynamicTest();
};