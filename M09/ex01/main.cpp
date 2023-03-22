#include "RPN.hpp"

int main(int ac, char **av)
{
    RPN r;
    if (ac == 2)
        std::cout << r.get_result(av[1]) << std::endl;
    return 0;
}