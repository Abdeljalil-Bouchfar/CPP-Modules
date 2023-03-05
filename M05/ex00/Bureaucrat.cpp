#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name(""), _grade(150) {
  std::cout << this->_name << " Bureaucrat Default constructor called"
            << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name) {
  std::cout << this->_name << " Bureaucrat Copy constructor called"
            << std::endl;
  *this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name), _grade(grade) {
  std::cout << this->_name << " Bureaucrat Parametrized constructorr called"
            << std::endl;
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() {
  std::cout << this->_name << " Bureaucrat Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
  std::cout << this->_name << " Bureaucrat Copy Assignment operator called"
            << std::endl;
  this->_grade = rhs._grade;
  return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
  os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
  return os;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Grade Too High Exception";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Grade Too Low Exception";
}

void Bureaucrat::incrementGrade() {
  if (this->_grade > 1)
    this->_grade--;
  else
    throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
  if (this->_grade < 150)
    this->_grade++;
  else
    throw Bureaucrat::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

/* ************************************************************************** */