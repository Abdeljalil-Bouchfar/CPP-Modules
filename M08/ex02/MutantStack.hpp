#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    MutantStack();
    MutantStack(MutantStack const &src);
    ~MutantStack();

    MutantStack &operator=(MutantStack const &rhs);
    // Member functions
    void push(const T &value) { m_stack.push(value); }
    void pop() { m_stack.pop(); }
    T &top() { return m_stack.top(); }
    const T &top() const { return m_stack.top(); }
    bool empty() const { return m_stack.empty(); }
    size_t size() const { return m_stack.size(); }

    // Iterator functions
    iterator begin() { return m_stack._Get_container().begin(); }
    iterator end() { return m_stack._Get_container().end(); }
    const_iterator begin() const { return m_stack._Get_container().begin(); }
    const_iterator end() const { return m_stack._Get_container().end(); }

private:
    std::stack<T> m_stack;
};

#endif