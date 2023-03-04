#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = "Default";
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "ShrubberyCreationForm Parameterized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_target = rhs._target;
	std::cout << "ShrubberyCreationForm Copy Assignement operator called" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= this->getSignGrade() && executor.getGrade() <= this->getExecGrade())
	{
		std::ofstream out;
		out.open((this->_target) + "_shrubbery");
		out << "              ,@@@@@@@,\n";
		out << "      ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
		out << "   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
		out << "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
		out << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
		out << "  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
		out << "  `&%\\ ` /%&'    |.|        \\ '|8'\n";
		out << "      |o|        | |         | |\n";
		out << "      |.|        | |         | |\n";
		out << "   \\\\/ ._\\//_/__/  ,\\\\_//__\\\\/.  \\_//__/_\n";
		out.close();
	}
	else
		throw AForm::GradeTooHighException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

/* ************************************************************************** */