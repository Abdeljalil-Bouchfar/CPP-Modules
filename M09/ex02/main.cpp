#include "PmergeMe.hpp"
#include <ctime>
#include <sys/time.h>

double get_current_time(double st_time)
{
    struct timeval tp;

    if (gettimeofday(&tp, NULL) == -1)
    {
        std::cerr << "Error\n";
        exit(1);
    }
    return (((tp.tv_sec * 1000000.0) + tp.tv_usec) - st_time);
}

int main(int ac, char **av)
{
    PmergeMe pmergeMe;
    std::vector<int> vc;
    std::deque<int> dq;
    if (ac < 2)
    {
        std::cerr << "Error\n";
        exit(1);
    }
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            if (!isdigit(av[i][j]))
            {
                std::cerr << "Error\n";
                exit(1);
            }
        }
        int nb = strtol(av[i], NULL, 10);
        vc.push_back(nb);
        dq.push_back(nb);
    }
    std::cout << "Before: ";
    for (size_t i = 0; i < vc.size(); i++)
        std::cout << " " << vc[i];
    std::cout << std::endl;
    //
    unsigned long v_start = clock();
    pmergeMe.sort_vector(vc);
    unsigned long v_end = clock();
    unsigned long d_start = clock();
    pmergeMe.sort_deque(dq);
    unsigned long d_end = clock();
    //
    std::cout << "After:  ";
    for (size_t i = 0; i < vc.size(); i++)
        std::cout << " " << vc[i];
    std::cout << std::endl;
    //
    std::cout << "Time to process a range of 5 elements with std::vector :  "
              << ((double)(v_end - v_start) / 100000) << " us" << std::endl;
    std::cout << "Time to process a range of 5 elements with std::deque  :  "
              << ((double)(d_end - d_start) / 100000) << " us" << std::endl;
    return 0;
}