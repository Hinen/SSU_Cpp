#include "Week14Manager.h"

Week14Manager::Week14Manager() : WeekManagerBase(14)
{
	// DO NOTHING
}

Week14Manager::~Week14Manager()
{
	// DO NOTHING
}

void Week14Manager::Main()
{
	WeekManagerBase::Main();

	DecoratorPattern();
}

//
void Week14Manager::DecoratorPattern()
{
	HinenDisplay *hineDisplay = new HinenDisplay();
	hineDisplay->DrawDisplay();

	//
	std::cout << "\n" << std::endl;
	DpsDisplayDecorator *dpsDisplayDecorator = new DpsDisplayDecorator(hineDisplay);
	dpsDisplayDecorator->DrawDisplay();

	//
	std::cout << "\n" << std::endl;
	DpsHpsDisplayDecorator *dpsHpsDisplayDecorator = new DpsHpsDisplayDecorator(hineDisplay);
	dpsHpsDisplayDecorator->DrawDisplay();

	delete hineDisplay;
	delete dpsDisplayDecorator;
	delete dpsHpsDisplayDecorator;
}

// Hinen Display
void Week14Manager::HinenDisplay::DrawDisplay()
{
	std::cout << "Hinen Display Draw" << std::endl;
}

// DisplayDecorator
Week14Manager::DisplayDecorator::DisplayDecorator(Week14Manager::Display *display)
{
	this->_display = display;
}

void Week14Manager::DisplayDecorator::DrawDisplay()
{
	_display->DrawDisplay();
}

// Dps
void Week14Manager::DpsDisplayDecorator::DrawDisplay()
{
	DisplayDecorator::DrawDisplay();

	std::cout << "Dps Display Draw" << std::endl;
}

// Hps (Dps include)
void Week14Manager::DpsHpsDisplayDecorator::DrawDisplay()
{
	DpsDisplayDecorator::DrawDisplay();

	std::cout << "Hps Display Draw" << std::endl;
}