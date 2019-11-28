#pragma once
#include "../WeekManagerBase.h"

class Week13Manager : public WeekManagerBase
{
public:
	Week13Manager();
	~Week13Manager();

private:
	class Robot
	{
	private:
		std::string _name;

	public:
		Robot(std::string name)
		{
			_name = name;
		}

	public:
		std::string GetName()
		{
			return _name;
		}

		virtual void Attack()
		{
			std::cout << "Robot Attack!" << std::endl;
		}

		virtual void Move()
		{
			std::cout << "Robot Move!" << std::endl;
		}
	};

	class TeaGunV : public Robot
	{
	public:
		TeaGunV(std::string name) : Robot(name)
		{
			// DO NOTHING
		}
	};

	class Atom : public Robot
	{
	public:
		Atom(std::string name) : Robot(name)
		{
			// DO NOTHING
		}
	};

public:
	virtual void Main() override;

private:
	void StrategyPattern();
};