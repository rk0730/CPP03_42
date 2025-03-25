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
	return 0;
}
