#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("Alex");
	claptrap.attack("target");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.takeDamage(5);
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	return 0;
}
