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
	
	ScavTrap scavtrap2(scavtrap);
	scavtrap2.attack("target");
	ScavTrap scavtrap3("Bob");
	scavtrap3 = scavtrap2;
	return 0;
}
