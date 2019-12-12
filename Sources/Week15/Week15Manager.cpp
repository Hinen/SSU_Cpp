#include "Week15Manager.h"

Week15Manager::Week15Manager() : WeekManagerBase(15)
{
	// DO NOTHING
}

Week15Manager::~Week15Manager()
{
	// DO NOTHING
}

void Week15Manager::Main()
{
	WeekManagerBase::Main();

	CommandPattern();
}

//
void Week15Manager::CommandPattern()
{
	Pokemon *pokemon = new Pokemon();
	PokemonMaster *pokemonMaster = new PokemonMaster();

	pokemonMaster->SetCommand(new PokemonAttackController(pokemon));
	pokemonMaster->DoCommand();

	pokemonMaster->SetCommand(new PokemonDefenceController(pokemon));
	pokemonMaster->DoCommand();

	delete pokemon;
	delete pokemonMaster;
}

// Pokemon
void Week15Manager::Pokemon::Attack()
{
	std::cout << "Pokemon Attack!" << std::endl;
}

void Week15Manager::Pokemon::Defence()
{
	std::cout << "Pokemon Defence!" << std::endl;
}

// PokemonAttackCommand
Week15Manager::PokemonAttackController::PokemonAttackController(Pokemon* pokemon)
{
	_pokemon = pokemon;
}

void Week15Manager::PokemonAttackController::Execute()
{
	_pokemon->Attack();
}

// PokemonDefenceCommand
Week15Manager::PokemonDefenceController::PokemonDefenceController(Pokemon* pokemon)
{
	_pokemon = pokemon;
}

void Week15Manager::PokemonDefenceController::Execute()
{
	_pokemon->Defence();
}

// PokemonMaster
Week15Manager::PokemonMaster::~PokemonMaster()
{
	DeleteCommand();
}

void Week15Manager::PokemonMaster::SetCommand(PokemonController *controller)
{
	DeleteCommand();
	_controller = controller;

}

void Week15Manager::PokemonMaster::DoCommand()
{
	if (_controller == nullptr)
		return;

	_controller->Execute();
}

void Week15Manager::PokemonMaster::DeleteCommand()
{
	if (_controller != nullptr) {
		delete _controller;
		_controller = nullptr;
	}
}