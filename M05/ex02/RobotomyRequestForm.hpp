#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();
	void execute(Bureaucrat const &burea) const;
	std::string getTarget() const;

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

private:
	std::string _target;
};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */