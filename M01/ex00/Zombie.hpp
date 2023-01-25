#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

	public:

		Zombie(std::string str);
		~Zombie();
		void announce( void );

	private:
		std::string _name;
};

#endif /* ********************************************************** ZOMBIE_H */