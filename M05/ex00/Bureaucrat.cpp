#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name(""), _grade(0)
{
	std::cout << "Default constructor called" << std::endl;
	throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{		
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::Bureaucrat(int grade, std::string name)
{
	std::cout << "Parametrized constructorr called" << std::endl;
	this->_grade = grade;
	this->_name = name;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "Copy Assignment operator called" << std::endl;
	this->_grade = rhs._grade;
	this->_name = rhs._name;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High Exception";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low Exception";
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */