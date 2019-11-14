#include "Week11Manager.h"

Week11Manager::Week11Manager() : WeekManagerBase(11)
{
	// DO NOTHING
}

Week11Manager::~Week11Manager()
{
	// DO NOTHING
}

void Week11Manager::Main()
{
	WeekManagerBase::Main();

	HumanClassTest();
}

void Week11Manager::HumanClassTest()
{
	_human = new Human();
	_kgiYoon = new KgiYoon();

	_human->kill1();

	// error
	//_human->Kill3();
	//_human->Kill4();

	_kgiYoon->kill1();
	_kgiYoon->kill2();

	// error
	//_kgiYoon->Kill3();
	//_kgiYoon->Kill4();

	delete _kgiYoon;
	delete _human;
}