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

	//StudentClassTest();
	//LampClassTest();
	AccountClassTest();
}

void Week10Manager::StudentClassTest()
{
	Student::ShowMaxGrade();

	_studentVector = new std::vector<Student*>();

	_studentVector->push_back(new Student(20192762));
	_studentVector->push_back(new Student(12345678));
	_studentVector->push_back(new Student(99999999));

	for (auto it = _studentVector->begin(); it != _studentVector->end(); it++)
	{
		auto student = *it;

		student->ShowStudentID();
		std::cout << student->GetStudentID() << std::endl;

		delete student;
	}

	delete _studentVector;
}

void Week10Manager::LampClassTest()
{
	_lamp = new Lamp(20192762);

	_lamp->TurnOn();
	_lamp->TurnOff();

	delete _lamp;
}

void Week10Manager::AccountClassTest()
{
	_account = new Account(20192762, 500000);

	_account->Deposite(5000);
	_account->Deposite(-5000);

	_account->Withdraw(100000);
	_account->Withdraw(-100000);
	_account->Withdraw(99999999);

	_account->ShowAccountInfo();

	delete _account;
}

//
int Week10Manager::Student::GetStudentID() const
{
	// _studentID = 10; // const functon can not write
	return _studentID;
}

void Week10Manager::Student::ShowStudentID()
{
	std::cout << _studentID << std::endl;
}

void Week10Manager::Student::ShowMaxGrade()
{
	std::cout << "Max Grade : " << _maxGrade << std::endl;
}

//
Week10Manager::Lamp::Lamp(int id)
{
	this->_id = id;
}

void Week10Manager::Lamp::TurnOn()
{
	std::cout << "Lamp(" << _id << ") : Turn On!" << std::endl;
}

void Week10Manager::Lamp::TurnOff()
{
	std::cout << "Lamp(" << _id << ") : Turn Off!" << std::endl;
}

//
Week10Manager::Account::Account(int accountNumber, int value)
{
	this->_accountNumber = accountNumber;
	this->_value = value;

	std::cout << this->_accountNumber << " 계좌번호와 " << this->_value << " 금액으로 생성 완료!" << std::endl;
	ShowAccountInfo();
}

void Week10Manager::Account::Deposite(int value)
{
	if (value <= 0)
	{
		std::cout << _accountNumber << " 계좌에 " << value << " 금액 입금 실패! ";
		std::cout << "0보다 작은 금액은 입금 할 수 없습니다." << std::endl;
	} 
	else
	{ 
		this->_value += value;
		std::cout << _accountNumber << " 계좌에 " << value << " 금액 입금 완료!" << std::endl;
	}

	ShowAccountInfo();
}

void Week10Manager::Account::Withdraw(int value)
{
	if (value <= 0)
	{
		std::cout << _accountNumber << " 계좌에 " << value << " 금액 출금 실패! ";
		std::cout << "0보다 작은 금액은 출금 할 수 없습니다." << std::endl;
	}
	else if (value > this->_value)
	{
		std::cout << _accountNumber << " 계좌에 " << value << " 금액 출금 실패! ";
		std::cout << "보유한 금액보다 더 큰 금액은 출금 할 수 없습니다." << std::endl;
	}
	else
	{
		this->_value -= value;
		std::cout << _accountNumber << " 계좌에 " << value << " 금액 출금 완료!" << std::endl;
	}

	ShowAccountInfo();
}

void Week10Manager::Account::ShowAccountInfo()
{
	std::cout << _accountNumber << " 계좌의 남은 금액 : " << _value << "\n" << std::endl;
}