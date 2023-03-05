#include "Bureaucrat.hpp"

void instantiate_test()
{
	try
	{
		Bureaucrat obj("l9ayd", 151);
		std::cout << obj << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void incr_test()
{
	Bureaucrat obj("l9ayd", 1);

	std::cout << obj << std::endl;
	try
	{
		obj.incrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << obj << std::endl;
}

void decr_test()
{
	Bureaucrat obj("l9ayd", 150);

	std::cout << obj << std::endl;
	try
	{
		obj.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << obj << std::endl;
}

int main(void)
{
	std::cout << "=========== instantiate test ===========\n";
	instantiate_test();
	std::cout << "\n=========== increment test ===========\n";
	incr_test();
	std::cout << "\n=========== decrement test ===========\n";
	decr_test();
}