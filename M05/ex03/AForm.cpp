#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() : _name(""), _signGrade(0), _execGrade(0), _is_signed(false)
{
	std::cout << this->_name << " AForm Default constructor called" << std::endl;
	throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	std::cout << this->_name << " AForm Copy constructor called" << std::endl;
	*this = src;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << this->_name << " AForm Parametrized constructorr called" << std::endl;
	if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	std::cout << this->_name << " AForm Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &AForm::operator=(AForm const &rhs)
{
	this->_is_signed = rhs._is_signed;
	std::cout << this->_name << " AForm Copy Assignement operator called" << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &os, AForm const &obj)
{
	os << obj.getName() << ", AForm is " << (obj.getState() ? "Singed" : "not Singed");
	return os;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High Exception";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low Exception";
}

void AForm::beSigned(const Bureaucrat &burea)
{
	if (burea.getGrade() <= this->_signGrade)
		this->_is_signed = true;
	else
		throw AForm::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string AForm::getName() const
{
	return this->_name;
}

int AForm::getSignGrade() const
{
	return this->_signGrade;
}

int AForm::getExecGrade() const
{
	return this->_execGrade;
}

bool AForm::getState() const
{
	return this->_is_signed;
}

/* ************************************************************************** */