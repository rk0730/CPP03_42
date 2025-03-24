#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavtrap("Alex");
	scavtrap.attack("target");
	scavtrap.guardGate();
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(5);
	scavtrap.takeDamage(100);
	scavtrap.attack("target");
	return 0;
}
