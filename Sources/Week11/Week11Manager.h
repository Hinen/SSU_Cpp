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

			Kill3();
			Kill4();
		}

	protected:
		void Kill4()
		{
			std::cout << "Human kill 4" << std::endl;
		}

	private:
		void Kill3()
		{
			std::cout << "Human kill 3" << std::endl;
		}
	};

	class KgiYoon : public Human
	{
	public:
		void kill2()
		{
			std::cout << "KgiYoon kill 2" << std::endl;

			Kill4();
		}
	};

	//
	class Animal
	{
	public:
		virtual void PrintState() = 0;

	protected:
		void breath()
		{
			std::cout << "Breathing Animal" << std::endl;
		}

		void Move()
		{
			std::cout << "Moving Animal" << std::endl;
		}
	};

	class Bird : public Animal
	{
	public:
		virtual void PrintState() override
		{
			PrintWingState();
			breath();
		}

	private:
		void PrintWingState()
		{
			std::cout << "Bird has wing" << std::endl;
		}
	};

	class Fish : public Animal
	{
	public:
		virtual void PrintState() override
		{
			PrintFinState();
			Move();
		}

	private:
		void PrintFinState()
		{
			std::cout << "Fish has fin" << std::endl;
		}
	};

public:
	virtual void Main() override;

private:
	Human *_human;
	KgiYoon *_kgiYoon;

	//
	Animal *_animal;
	Bird *_bird;
	Fish *_fish;

private:
	void HumanClassTest();
	void AnimalClassTest();
};