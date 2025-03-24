#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "ClapTrap " << name << " is born!" << std::endl;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is dead!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (hit_points == 0)
	{
		std::cout << "ClapTrap " << name << " has no hit points!" << std::endl;
		return;
	}
	if (energy_points == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
	energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " takes damage " << amount << " points!" << std::endl;
	if (hit_points < amount)
		hit_points = 0;
	else
		hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << "ClapTrap " << name << " has no hit points!" << std::endl;
		return;
	}
	if (energy_points == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " is repaired " << amount << " points!" << std::endl;
	hit_points += amount;
	energy_points -= 1;
}
