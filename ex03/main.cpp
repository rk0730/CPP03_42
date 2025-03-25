#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamondtrap("Alex");
	diamondtrap.attack("target");
	diamondtrap.guardGate();
	diamondtrap.highFivesGuys();
	diamondtrap.whoAmI();
	diamondtrap.takeDamage(5);
	diamondtrap.beRepaired(5);
	diamondtrap.takeDamage(100);
	diamondtrap.attack("target");
	return 0;
}
