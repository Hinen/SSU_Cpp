#include "Week7Manager.h"

Week7Manager::Week7Manager() : WeekManagerBase(7)
{
	// DO NOTHING
}

Week7Manager::~Week7Manager()
{
	// DO NOTHING
}

void Week7Manager::Main() 
{
	WeekManagerBase::Main();

	RefTest();
}

void Week7Manager::RefTest()
{
	int* p = new int(10);
	int* &r = p;
	delete r;	// ref can * delete
}