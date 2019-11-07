#include "Week10Manager.h"

Week10Manager::Week10Manager() : WeekManagerBase(10)
{
	// DO NOTHING
}

Week10Manager::~Week10Manager()
{
	// DO NOTHING
}

void Week10Manager::Main()
{
	WeekManagerBase::Main();

	StudentClassTest();
}

void Week10Manager::StudentClassTest()
{
	_student = new Student(20192762);

	_student->ShowStudentID();

	delete _student;
}

void Week10Manager::Student::ShowStudentID()
{
	std::cout << _studentID << std::endl;
}