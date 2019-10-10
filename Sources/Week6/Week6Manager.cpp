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

	//StructTest();
	DynamicTest();
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

void Week6Manager::DynamicTest()
{
	//
	p = new int;
	*p = 10;

	std::cout << "P adress : " << &p << std::endl;
	std::cout << "P value : " << *p << std::endl;
	std::cout << "P value adress : " << p << std::endl;

	//
	int* p2 = p;
	*p2 = 100;

	std::cout << std::endl;
	std::cout << "Change value by p2" << std::endl;
	std::cout << "P adress : " << &p << std::endl;
	std::cout << "P value : " << *p << std::endl;
	std::cout << "P value adress : " << p << std::endl;

	std::cout << std::endl;
	std::cout << "P2 adress : " << &p2 << std::endl;
	std::cout << "P2 value : " << *p2 << std::endl;
	std::cout << "P2 value adress : " << p2 << std::endl;

	//
	int& ref = *p;
	ref = 1000;

	std::cout << std::endl;
	std::cout << "Change value by ref" << std::endl;
	std::cout << "P adress : " << &p << std::endl;
	std::cout << "P value : " << *p << std::endl;
	std::cout << "P value adress : " << p << std::endl;

	std::cout << std::endl;
	std::cout << "P2 adress : " << &p2 << std::endl;
	std::cout << "P2 value : " << *p2 << std::endl;
	std::cout << "P2 value adress : " << p2 << std::endl;

	//
	delete p2; // p, p2 is same adress.
	p = nullptr;
}