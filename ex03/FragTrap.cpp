#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " is born!" << std::endl;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is dead!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " high fives guys!" << std::endl;
}
