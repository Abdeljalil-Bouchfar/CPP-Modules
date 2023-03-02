#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:
	Form();
	Form(Form const &src);
	Form(std::string name, int signGrade, int execGrade);
	~Form();

	Form &operator=(Form const &rhs);
	std::string getName() const;
	int getSignGrade() const;
	int getExecGrade() const;
	bool getState() const;
	void beSigned(const Bureaucrat &bure);

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

std::ostream &operator<<(std::ostream &os, Form const &obj);

#endif /* ************************************************************ FORM_H */