#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm();
	void execute(Bureaucrat const &burea) const;
	std::string getTarget() const;

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

private:
	std::string _target;
};
#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */