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
	_studentVector = new std::vector<Student*>();

	_studentVector->push_back(new Student(20192762));
	_studentVector->push_back(new Student(12345678));
	_studentVector->push_back(new Student(99999999));

	for (auto it = _studentVector->begin(); it != _studentVector->end(); it++)
	{
		auto student = *it;

		student->ShowStudentID();

		delete student;
	}

	delete _studentVector;
}

void Week10Manager::Student::ShowStudentID()
{
	std::cout << _studentID << std::endl;
}