#pragma once
#include "../WeekManagerBase.h"

class Week15Manager : public WeekManagerBase
{
public:
	Week15Manager();
	~Week15Manager();
	
public:
	virtual void Main() override;

private:
	void CommandPattern();
};