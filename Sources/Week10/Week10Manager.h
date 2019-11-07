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
		int GetStudentID() const;
		void ShowStudentID();
	};

public:
	void Main();

private:
	std::vector<Student*>* _studentVector;

private:
	void StudentClassTest();
};