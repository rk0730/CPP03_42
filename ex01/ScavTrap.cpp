#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " is born!" << std::endl;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is dead!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (hit_points == 0)
	{
		std::cout << "ScavTrap " << name << " has no hit points!" << std::endl;
		return;
	}
	if (energy_points == 0)
	{
		std::cout << "ScavTrap " << name << " has no energy points!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
	energy_points -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " has entered in Gate keeper mode!" << std::endl;
}