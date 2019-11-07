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

	//
	class Account
	{
	public:
		Account(int accountNumber, int value);

	private:
		int _accountNumber;
		int _value;

	public:
		void Deposite(int value);
		void Withdraw(int value);

		void ShowAccountInfo();
	};

public:
	void Main();

private:
	std::vector<Student*>* _studentVector;

	//
	Lamp* _lamp;

	//
	Account* _account;

private:
	void StudentClassTest();
	void LampClassTest();
	void AccountClassTest();
};