#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "Default";
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "RobotomyRequestForm Parameterized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_target = rhs._target;
	std::cout << "RobotomyRequestForm Copy Assignement operator called" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= this->getSignGrade() && executor.getGrade() <= this->getExecGrade())
	{
		for (int i = 0; i < 3; i++)
		{
			std::cout << "drilling noises..." << std::endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(300));
		}
		if (std::rand() < RAND_MAX / 2)
        	std::cout << "target: " << this->_target << " robotomized successfully" << std::endl;
		else
        	std::cout << "target: " << this->_target << " robotomy failed" << std::endl;
	}
	else
		throw AForm::GradeTooHighException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

/* ************************************************************************** */