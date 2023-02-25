#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	delete dog;
	delete cat;
	std::cout << "-------------------------------" << std::endl;
	Animal **animals = new Animal*[4];
	for (int i = 0; i < 2; i++)
	{
		animals[i] = new Dog();
		std::cout << "-------------------------------" << std::endl;
	}
	for (int i = 2; i < 4; i++)
	{
		animals[i] = new Cat();
		std::cout << "-------------------------------" << std::endl;
	}
	
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
		std::cout << "-------------------------------" << std::endl;
	}

	delete [] animals;
	return 0;
}