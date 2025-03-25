#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragtrap("Alex");
	fragtrap.attack("target");
	fragtrap.highFivesGuys();
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(5);
	fragtrap.takeDamage(100);
	fragtrap.attack("target");
	
	FragTrap fragtrap2 = fragtrap;
	fragtrap2.attack("target");
	FragTrap fragtrap3;
	fragtrap3 = fragtrap2;
	return 0;
}
