#include "Week15CommandPattern.h"

void Week15CommandPattern::PatternMain()
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
void Pokemon::Attack()
{
	std::cout << "Pokemon Attack!" << std::endl;
}

void Pokemon::Defence()
{
	std::cout << "Pokemon Defence!" << std::endl;
}

// PokemonAttackCommand
PokemonAttackController::PokemonAttackController(Pokemon* pokemon)
{
	_pokemon = pokemon;
}

void PokemonAttackController::Execute()
{
	_pokemon->Attack();
}

// PokemonDefenceCommand
PokemonDefenceController::PokemonDefenceController(Pokemon* pokemon)
{
	_pokemon = pokemon;
}

void PokemonDefenceController::Execute()
{
	_pokemon->Defence();
}

// PokemonMaster
PokemonMaster::~PokemonMaster()
{
	DeleteCommand();
}

void PokemonMaster::SetCommand(PokemonController *controller)
{
	DeleteCommand();
	_controller = controller;

}

void PokemonMaster::DoCommand()
{
	if (_controller == nullptr)
		return;

	_controller->Execute();
}

void PokemonMaster::DeleteCommand()
{
	if (_controller != nullptr) {
		delete _controller;
		_controller = nullptr;
	}
}