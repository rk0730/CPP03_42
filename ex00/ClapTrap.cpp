#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default")
{
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points),
	  _attack_damage(other._attack_damage)
{
	std::cout << "ClapTrap " << _name << "(copy) is born!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	std::cout << "ClapTrap " << _name << "(copy assign) is born!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points!" << std::endl;
		return;
	}
	if (_energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy points!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage
			  << " points of damage!" << std::endl;
	_energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes damage " << amount << " points!" << std::endl;
	if (_hit_points < amount)
		_hit_points = 0;
	else
		_hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points!" << std::endl;
		return;
	}
	if (_energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy points!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " is repaired " << amount << " points!" << std::endl;
	_hit_points += amount;
	_energy_points -= 1;
}
