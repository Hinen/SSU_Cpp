#include "Week6Manager.h"

Week6Manager::Week6Manager() : WeekManagerBase(6)
{

}

Week6Manager::~Week6Manager()
{

}

void Week6Manager::Main() 
{
	WeekManagerBase::Main();

	StructTest();
}

void Week6Manager::StructTest() 
{
	_testStruct.i = 10;
	_testStruct.f = 2.5f;
	_testStruct.c = 'a';

	std::cout << "testStruct i : " << _testStruct.i << std::endl;
	std::cout << "testStruct f : " << _testStruct.f << std::endl;
	std::cout << "testStruct c : " << _testStruct.c << std::endl;
}