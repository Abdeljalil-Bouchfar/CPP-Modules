#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();

		AAnimal &operator=(AAnimal const &rhs);
		virtual void makeSound() const = 0;
		std::string getType() const;

	protected:
		std::string type;
};

#endif /* ********************************************************** ANIMAL_H */