#pragma once
#include "Stdafx.h"
#include "DesignPatternBaseManager.h"

class WeekManagerBase 
{
public:
	WeekManagerBase(int week);
	~WeekManagerBase();

	virtual void Main();
	virtual void DoDesignPattern(DesignPatternBaseManager *patternManager);

protected:
	int _week;
};