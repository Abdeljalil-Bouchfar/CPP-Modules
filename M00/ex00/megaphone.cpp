#include <iostream>

int main(int ac, char **av)
{
	int i = 0;
	if (ac <= 1)
	{
		std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 1;
	}
	while (++i < ac)
	{
		int j = -1;
		while (av[i][++j])
			std::cout << (char) toupper(av[i][j]);
	}
	std::cout << '\n';
	return 0;
}