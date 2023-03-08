#include "ScalarConverter.hpp"
#include <string>

int main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Wrong number of args" << std::endl;
	else
		ScalarConverter::convert((av[1]));
}