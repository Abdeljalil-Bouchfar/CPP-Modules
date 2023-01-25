#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N > 0)
	{
		Zombie *objs = new Zombie[N];
		for (int i = 0;  i < N; i++)
			objs[i].set_name(name);
		return objs;
	}
	return NULL;
}

int main(void)
{
	int N = 5;
	Zombie *objs = zombieHorde(N, "Zakiiiiii");
	for (int i = 0;  i < N; i++)
		objs[i].announce();
	delete [] objs;
}
