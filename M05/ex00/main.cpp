#include "Bureaucrat.hpp"

void instantiate_test()
{
	try
	{
		Bureaucrat obj(1, "Hitler");
		std::cout << obj << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void incr_test()
{
	Bureaucrat obj(2, "Hitler");

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
	Bureaucrat obj(149, "Hitler");

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
	std::cout << "--------- instantiate test ------------" << std::endl;
	instantiate_test();
	std::cout << "--------- increment test --------------" << std::endl;
	incr_test();
	std::cout << "--------- decrement test --------------" << std::endl;
	decr_test();
}