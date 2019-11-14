#pragma once
#include "../WeekManagerBase.h"

class Week11Manager : public WeekManagerBase
{
public:
	Week11Manager();
	~Week11Manager();

protected:
	class Human
	{
	public:
		void kill1()
		{
			std::cout << "Human kill 1" << std::endl;
		}
	};

	class KgiYoon : public Human
	{
	public:
		void kill2()
		{
			std::cout << "KgiYoon kill 2" << std::endl;
		}
	};

public:
	void Main();

private:
	Human *_human;
	KgiYoon *_kgiYoon;

private:
	void HumanClassTest();
};