#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

public:
	AForm();
	AForm(AForm const &src);
	AForm(std::string name, int signGrade, int execGrade);
	virtual ~AForm();

	AForm &operator=(AForm const &rhs);
	std::string getName() const;
	int getSignGrade() const;
	int getExecGrade() const;
	bool getState() const;
	void beSigned(const Bureaucrat &burea);
	virtual void    execute(Bureaucrat const &executor) const  = 0;

	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

private:
	const std::string _name;
	const int _signGrade;
	const int _execGrade;
	bool _is_signed;
};

std::ostream &operator<<(std::ostream &os, AForm const &obj);

#endif /* ************************************************************ FORM_H */