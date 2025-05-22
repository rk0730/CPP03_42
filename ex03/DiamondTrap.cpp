#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("default_clap_name"), ScavTrap("default"), FragTrap("default"), _name("default")
{
	std::cout << "DiamondTrap " << _name << " is born!" << std::endl;
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap " << name << " is born!" << std::endl;
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other._name + "_clap_name"), ScavTrap(other), FragTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap " << _name << "(copy) is born!" << std::endl;
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		_name = other._name;
		_hit_points = FragTrap::_hit_points;
		_energy_points = ScavTrap::_energy_points;
		_attack_damage = FragTrap::_attack_damage;
	}
	std::cout << "DiamondTrap " << _name << "(copy assign) is born!" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " is dead!" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << _name << " is " << ClapTrap::_name << std::endl;
}
