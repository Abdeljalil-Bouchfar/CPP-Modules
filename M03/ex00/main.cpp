#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap player("Player");
	player.attack("opp");
	player.takeDamage(10);
	player.beRepaired(10);
}