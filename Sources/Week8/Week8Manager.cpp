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
	_testClass.TestFunction();	// not inited

	_testClass.TestClassInit(26, 'b');
	_testClass.TestFunction();

	//
	_testClassPtr = new TestClass(97, 's');
	_testClassPtr->TestFunction();

	delete _testClassPtr;
}

void Week8Manager::TestClass::TestFunction()
{
	if (!_isInited)
	{
		std::cout << "Test class need init!!" << std::endl;
		return;
	}

	std::cout << this->_i << " " << this->_c << std::endl;
}