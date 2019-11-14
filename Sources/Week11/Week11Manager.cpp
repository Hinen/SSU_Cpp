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

	//HumanClassTest();
	AnimalClassTest();
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

void Week11Manager::AnimalClassTest()
{
	int selection;

	std::cout << "1 : 새, 2 : 물고기 ";
	std::cin >> selection;

	/* This code is stupid
	if (selection == 1)
	{
		_bird = new Bird();
		_bird->PrintState();
		delete _bird;
	}
	else
	{
		_fish = new Fish();
		_fish->PrintState();
		delete _fish;
	}
	*/

	if (selection == 1)
		_animal = new Bird();
	else
		_animal = new Fish();

	_animal->PrintState();

	delete _animal;
}