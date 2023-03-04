#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const &executor) const;
	std::string getTarget() const;

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

private:
	std::string _target;
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */