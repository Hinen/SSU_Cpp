#pragma once
#include "../WeekManagerBase.h"

class Week13Manager : public WeekManagerBase
{
public:
	Week13Manager();
	~Week13Manager();

private:
	class AttackInterface
	{
	public:
		virtual void Attack(std::string name) = 0;
	};

	class MoveInterface
	{
	public:
		virtual void Move(std::string name) = 0;
	};

	class PunchAttack : public AttackInterface
	{
	public:
		void Attack(std::string name) override;
	};

	class MissileAttack : public AttackInterface
	{
	public:
		void Attack(std::string name) override;
	};

	class WalkingMove : public MoveInterface
	{
	public:
		void Move(std::string name) override;
	};

	class FlyingMove : public MoveInterface
	{
	public:
		void Move(std::string name) override;
	};

	class Robot
	{
	private:
		std::string _name;

		AttackInterface *_attItf = nullptr;
		MoveInterface *_moveItf = nullptr;

	public:
		Robot(std::string name, AttackInterface *attItf, MoveInterface *moveItf);
		~Robot();

	public:
		std::string GetName();
		void Attack();
		void Move();
	};

	class TeaGunV : public Robot
	{
	public:
		TeaGunV(std::string name, AttackInterface *attItf, MoveInterface *moveItf);
	};

	class Atom : public Robot
	{
	public:
		Atom(std::string name, AttackInterface *attItf, MoveInterface *moveItf);
	};

public:
	virtual void Main() override;

private:
	void StrategyPattern();
};