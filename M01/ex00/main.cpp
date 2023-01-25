#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *z = new Zombie(name);
	return z;
}

void randomChump( std::string name )
{
	Zombie z(name);
	z.announce();
}

int main(void)
{
	Zombie *obj = newZombie("Zakiiiiii");
	obj->announce();
	randomChump("Zakiiiiii");
	delete(obj);
}