#pragma once
#include "Stdafx.h"

class WeekManagerBase 
{
public:
	WeekManagerBase(int week);
	~WeekManagerBase();

	virtual void Main();

protected:
	int _week;
};