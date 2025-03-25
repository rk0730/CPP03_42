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
	
	ClapTrap claptrap2 = claptrap;
	ClapTrap claptrap3("Bob");
	claptrap3 = claptrap2;
	return 0;
}
