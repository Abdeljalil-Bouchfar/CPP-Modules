#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>

class Span
{

public:
    Span();
    Span(Span const &src);
    Span(unsigned int n);
    ~Span();

    void addNumber(int number);
    void addRange(int *start, int *end);
    int shortestSpan() const;
    int longestSpan() const;
    void print() const;

    Span &operator=(Span const &rhs);

private:
    int *_arr;
    unsigned int _N;
    unsigned int _index;
};

#endif