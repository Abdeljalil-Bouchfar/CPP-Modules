#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &Intern::operator=(Intern const &rhs)
{
	(void) rhs;
	std::cout << "Intern Copy Assignment operator called" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Intern::UnknownFormType::what() const throw()
{
	return "Unknown Form Type Exception";
}

AForm *Intern::makeForm(std::string name, std::string target) const
{
	AForm *form;
	int index = -1;
	int saved[3] = {name.compare("shrubbery creation"),
					name.compare("robotomy request"), 
					name.compare("presidential pardon")};
	
	for (int i = 0; i < 3; i++)
		if (saved[i] == 0)
			index = i;
	
	switch (index) {
    	case 0:
    	  form = new ShrubberyCreationForm(target);
    	  break;
    	case 1:
    	  form = new RobotomyRequestForm(target);
    	  break;
    	case 2:
    	  form = new PresidentialPardonForm(target);
    	  break;
    	default:
    	  throw Intern::UnknownFormType();
    	  break;
  }
  return form;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */