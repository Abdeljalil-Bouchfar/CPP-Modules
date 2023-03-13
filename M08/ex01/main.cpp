#include "Span.hpp"

int main()
{
    int arr[10] = {21, 56, 3, 7, 9, 3, 9, 5, 12, 58};
    Span sp = Span(50);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "--> ";
    sp.print();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    sp.addRange(arr, arr + 10);
    std::cout << "--> ";
    sp.print();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}