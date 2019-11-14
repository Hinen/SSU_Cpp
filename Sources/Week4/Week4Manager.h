#pragma once
#include "../WeekManagerBase.h"

class Week4Manager : public WeekManagerBase
{
public:
	Week4Manager();
	~Week4Manager();

public:
	virtual void Main() override;

private:
	void StdCoutTest();
	void StdCinTest();
	void CppDataTypeTest();
	void ConditionTest();
	void RepeatTest();
};

