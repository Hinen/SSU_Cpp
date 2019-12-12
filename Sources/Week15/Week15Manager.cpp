#include "Week15Manager.h"
#include "Week15CommandPattern.h"
#include "Week15ObserverPattern.h"

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

	//DoDesignPattern(new Week15CommandPattern());
	DoDesignPattern(new Week15ObserverPattern());
}