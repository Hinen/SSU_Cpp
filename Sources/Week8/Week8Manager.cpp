#include "Week8Manager.h"

Week8Manager::Week8Manager() : WeekManagerBase(8)
{
	// DO NOTHING
}

Week8Manager::~Week8Manager()
{
	// DO NOTHING
}

void Week8Manager::Main()
{
	WeekManagerBase::Main();

	ClassTest();
}

void Week8Manager::ClassTest()
{
	_testClass = new TestClass(97, 's');
	_testClass->TestFunction();

	delete _testClass;
}

void Week8Manager::TestClass::TestFunction()
{
	std::cout << this->i << " " << this->c << std::endl;
}