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
		static const int _maxGrade = 4;

	public:
		int GetStudentID() const;
		void ShowStudentID();

		static void ShowMaxGrade();
	};

	//
	class Lamp
	{
	public:
		Lamp(int id);

	private:
		int _id;

	public:
		void TurnOn();
		void TurnOff();
	};

public:
	void Main();

private:
	std::vector<Student*>* _studentVector;

	//
	Lamp* _lamp;

private:
	void StudentClassTest();
	void LampClassTest();
};