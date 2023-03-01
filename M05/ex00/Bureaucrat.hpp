#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

	private:
		std::string _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif /* ****************************************************** BUREAUCRAT_H */