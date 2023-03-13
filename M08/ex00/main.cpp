#include "easyfind.hpp"

int main(void)
{
    std::vector<int> container;
    for (int i = 0; i < 100;i++)
        container.push_back(i);
    std::cout << easyfind(container, 100) << std::endl;
    return 0;
}