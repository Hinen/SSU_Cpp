#pragma once
#include "../WeekManagerBase.h"

class Week15Manager : public WeekManagerBase
{
public:
	Week15Manager();
	~Week15Manager();

private:
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

public:
	virtual void Main() override;

private:
	void CommandPattern();
};