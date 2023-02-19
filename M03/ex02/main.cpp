#include "FragTrap.hpp"

int main(void)
{
	FragTrap obj("player");
	obj.attack("opp");
	obj.takeDamage(10);
	obj.beRepaired(10);
	obj.highFivesGuys();
}