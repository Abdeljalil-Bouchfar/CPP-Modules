#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "---------------- Correct ---------------" << std::endl;
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound(); // will output the cat sound!
	cat->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

	//-------------------------> 

	std::cout << "----------------- Wrong ----------------" << std::endl;
	const WrongAnimal *wanimal = new WrongAnimal();
	const WrongAnimal *wcat = new WrongCat();

	wanimal->makeSound();
	wcat->makeSound();


	delete wanimal;
	delete wcat;
	return 0;
}