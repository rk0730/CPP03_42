#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap " << _name << " is born!" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " is born!" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << _name << "(copy) is born!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap " << _name << "(copy assign) is born!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hit_points <= 0)
	{
		std::cout << "ScavTrap " << _name << " has no hit points!" << std::endl;
		return;
	}
	if (_energy_points <= 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy points!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage
			  << " points of damage!" << std::endl;
	_energy_points -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode!" << std::endl;
}
