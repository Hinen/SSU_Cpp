#include "Week15Manager.h"
#include "Week15CommandPattern.h"

Week15Manager::Week15Manager() : WeekManagerBase(15)
{
	// DO NOTHING
}

Week15Manager::~Week15Manager()
{
	// DO NOTHING
}

void Week15Manager::Main()
{
	WeekManagerBase::Main();

	CommandPattern();
}

void Week15Manager::CommandPattern()
{
	Week15CommandPattern *commandPattern = new Week15CommandPattern();

	commandPattern->PatternMain();

	delete commandPattern;
}