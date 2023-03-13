#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>

template <typename T>
int easyfind(T container, int target)
{
    std::vector<int>::iterator iter = std::find(container.begin(), container.end(), target);
    if (iter != container.end())
        return (std::distance(container.begin(), iter));
    return -1;
}

#endif