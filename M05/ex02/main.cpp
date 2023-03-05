#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat executor("Bureaucrat_1", 150);

    ShrubberyCreationForm shrubbery("TS");
    executor.executeForm(shrubbery);

    RobotomyRequestForm robotomy("TR");
    executor.executeForm(robotomy);

    PresidentialPardonForm president("TP");
    executor.executeForm(president);
}