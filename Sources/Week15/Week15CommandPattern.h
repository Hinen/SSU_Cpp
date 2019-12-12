#pragma once
#include "../DesignPatternBaseManager.h"

class PokemonController
{
public:
	virtual void Execute() = 0;
};

class Pokemon
{
public:
	void Attack();
	void Defence();
};

class PokemonAttackController : public PokemonController
{
private:
	Pokemon *_pokemon;

public:
	PokemonAttackController(Pokemon* pokemon);
	virtual void Execute() override;
};

class PokemonDefenceController : public PokemonController
{
private:
	Pokemon *_pokemon;

public:
	PokemonDefenceController(Pokemon* pokemon);
	virtual void Execute() override;
};

class PokemonMaster
{
public:
	~PokemonMaster();

private:
	PokemonController *_controller = nullptr;

public:
	void SetCommand(PokemonController *controller);
	void DoCommand();

private:
	void DeleteCommand();
};

class Week15CommandPattern : public DesignPatternBaseManager
{
public:
	virtual void PatternMain() override;
};