#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::const_iterator iterator;
    iterator begin() const { return this->c.begin(); }
    iterator end() const { return this->c.end(); }
};

#endif