#include "Bureaucrat.hpp"

void instantiate_test()
{
	try
	{
		Form obj("Form_1", 151, 1);
		std::cout << obj << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void sign_test()
{
	Form  form("Form_1", 2, 1);
	Bureaucrat bure("Bure_1", 5);

	std::cout << form << std::endl;
	try
	{
		form.beSigned(bure);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form << std::endl;
}

int main(void)
{
	std::cout << "=============== instantiate test ===============" << std::endl;
	instantiate_test();
	std::cout << "\n=============== sign test ===============" << std::endl;
	sign_test();
}