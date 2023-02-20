#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();

		Animal &operator=(Animal const &rhs);
		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
};

#endif /* ********************************************************** ANIMAL_H */