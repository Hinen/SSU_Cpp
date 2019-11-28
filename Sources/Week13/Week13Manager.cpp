#include "Week13Manager.h"

Week13Manager::Week13Manager() : WeekManagerBase(13)
{
	// DO NOTHING
}

Week13Manager::~Week13Manager()
{
	// DO NOTHING
}

void Week13Manager::Main()
{
	WeekManagerBase::Main();

	StrategyPattern();
}

//
void Week13Manager::StrategyPattern()
{
	TeaGunV *teaGunV = new TeaGunV("TeaGunV", new PunchAttack(), new WalkingMove());
	Atom *atom = new Atom("Atom", new MissileAttack(), new FlyingMove());

	teaGunV->Attack();
	teaGunV->Move();

	atom->Attack();
	atom->Move();

	delete teaGunV;
	delete atom;
}

// Interfaces
void Week13Manager::PunchAttack::Attack(std::string name)
{
	std::cout << name.c_str() << " : Punch Attack!" << std::endl;
}

void Week13Manager::MissileAttack::Attack(std::string name)
{
	std::cout << name.c_str() << " : Missile Attack!" << std::endl;
}

void Week13Manager::WalkingMove::Move(std::string name)
{
	std::cout << name.c_str() << " : Walking Move!" << std::endl;
}

void Week13Manager::FlyingMove::Move(std::string name)
{
	std::cout << name.c_str() << " : Flying Move!" << std::endl;
}

// Robot
Week13Manager::Robot::Robot(std::string name, AttackInterface *attItf, MoveInterface *moveItf)
{
	_name = name;
	_attItf = attItf;
	_moveItf = moveItf;
}

Week13Manager::Robot::~Robot()
{
	delete _attItf;
	delete _moveItf;
}

std::string Week13Manager::Robot::GetName()
{
	return _name;
}

void Week13Manager::Robot::Attack()
{
	_attItf->Attack(_name);
}

void Week13Manager::Robot::Move()
{
	_moveItf->Move(_name);
}

// TeagunV
Week13Manager::TeaGunV::TeaGunV(std::string name, AttackInterface *attItf, MoveInterface *moveItf) : Robot(name, attItf, moveItf)
{
	// DO NOTHING
}

// Atom
Week13Manager::Atom::Atom(std::string name, AttackInterface *attItf, MoveInterface *moveItf) : Robot(name, attItf, moveItf)
{
	// DO NOTHING
}

