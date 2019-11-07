#pragma once
#include "../WeekManagerBase.h"

class Week10Manager : public WeekManagerBase
{
public:
	Week10Manager();
	~Week10Manager();

protected:
	class Student
	{
	public:
		Student(int id)
		{
			this->_studentID = id;
		}

	private:
		int _studentID;

	public:
		void ShowStudentID();
	};

public:
	void Main();

private:
	Student *_student;

private:
	void StudentClassTest();
};