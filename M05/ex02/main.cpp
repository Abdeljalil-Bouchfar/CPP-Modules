// void instantiate_test()
// {
// 	try
// 	{
// 		Form obj("Form_1", 151, 1);
// 		std::cout << obj << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }

// void sign_test()
// {
// 	Form  form("Form_1", 1, 2);
// 	Bureaucrat bure("Bure_1", 1);

// 	std::cout << form << std::endl;
// 	try
// 	{
// 		form.beSigned(bure);
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << form << std::endl;
// }

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat executor("executor", 150);

    ShrubberyCreationForm shrubbery("TargetSH");
    RobotomyRequestForm robotomy("TargetRO");
    PresidentialPardonForm president("TargetPR");

    executor.signForm(shrubbery);
    executor.signForm(robotomy);
    executor.signForm(president);
    
}