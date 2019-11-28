#include "Week13Manager.h"

Week13Manager::Week13Manager() : WeekManagerBase(13)
{
	// DO NOTHING
}

Week13Manager::~Week13Manager()
{
	// DO NOTHING
}

void Week13Manager::Main()
{
	WeekManagerBase::Main();

	StrategyPattern();
}

void Week13Manager::StrategyPattern()
{
	TeaGunV *teaGunV = new TeaGunV("TeaGunV");
	Atom *atom = new Atom("Atom");

	teaGunV->Attack();
	teaGunV->Move();

	atom->Attack();
	atom->Move();

	delete teaGunV;
	delete atom;
}