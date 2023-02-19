#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavTrap("player");
	scavTrap.attack("opp");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(10);
	scavTrap.guardGate();
}