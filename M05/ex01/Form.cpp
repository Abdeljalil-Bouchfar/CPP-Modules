#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("") , _signGrade(0), _execGrade(0), _is_signed(false)
{
	std::cout << this->_name << " Form Default constructor called" << std::endl;
	throw Form::GradeTooHighException();
}

Form::Form( const Form & src ) : _name(src._name) , _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	std::cout << this->_name << " Form Copy constructor called" << std::endl;
	*this = src;
}


Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << this->_name << " Form Parametrized constructorr called" << std::endl;
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << this->_name << " Form Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	this->_is_signed = rhs._is_signed;
	return *this;
}

std::ostream &			operator<<( std::ostream & os, Form const & obj )
{
	os << obj.getName() << ", Form is " << (obj.getState() ? "Singed" : "not Singed");
	return os;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High Exception";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low Exception";
}

void Form::beSigned(const Bureaucrat &bure)
{
	if (bure.getGrade() <= this->_signGrade)
		this->_is_signed = true;
	else
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName() const
{
	return this->_name;
}

int Form::getSignGrade() const
{
	return this->_signGrade;
}

int Form::getExecGrade() const
{
	return this->_execGrade;
}

bool Form::getState() const
{
	return this->_is_signed;
}

/* ************************************************************************** */