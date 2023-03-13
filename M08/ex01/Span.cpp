#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _N(0), _index(-1)
{
    this->_arr = new int[0];
}

Span::Span(const Span &src)
{
    this->_arr = new int[0];
    *this = src;
}

Span::Span(unsigned int N)
{
    this->_arr = new int[N];
    this->_N = N;
    this->_index = -1;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
    delete[] this->_arr;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &Span::operator=(Span const &rhs)
{
    delete[] this->_arr;
    this->_arr = new int[rhs._N];
    this->_N = rhs._N;
    this->_index = rhs._index;
    for (unsigned int i = 0; i <= rhs._index; i++)
        this->_arr[i] = rhs._arr[i];
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::print() const
{
    for (unsigned int i = 0; i <= this->_index; i++)
        std::cout << this->_arr[i] << " ";
    std::cout << std::endl;
}

void Span::addNumber(int number)
{
    this->_index++;
    if (this->_index >= this->_N)
        throw std::out_of_range("addNumber: out of range");
    this->_arr[this->_index] = number;
}

void Span::addRange(int *start, int *end)
{
    while (start != end)
        this->addNumber(*start++);
}

int Span::shortestSpan() const
{
    if (this->_index <= 0)
        throw std::out_of_range("shortestSpan: out of range");
    std::sort(&(this->_arr[0]), &(this->_arr[this->_index + 1]));
    int min;
    for (unsigned int i = 0; i < this->_index; i++)
    {
        if (i == 0 || this->_arr[i + 1] - this->_arr[i] < min)
            min = this->_arr[i + 1] - this->_arr[i];
    }
    return min;
}

int Span::longestSpan() const
{
    if (this->_index <= 0)
        throw std::out_of_range("shortestSpan: out of range");
    std::sort(&(this->_arr[0]), &(this->_arr[this->_index + 1]));
    return (this->_arr[this->_index] - this->_arr[0]);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
/* ************************************************************************** */