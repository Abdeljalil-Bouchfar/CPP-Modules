#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Intern
{

public:
	Intern();
	Intern(Intern const &src);
	~Intern();
	AForm *makeForm(std::string name, std::string target) const;

	class UnknownFormType : public std::exception
	{
		const char *what() const throw();
	};

	Intern &operator=(Intern const &rhs);
};

#endif /* ****************************************************** INTERN_H */