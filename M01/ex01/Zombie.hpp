#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

	public:

		Zombie();
		~Zombie();
		void set_name(std::string str);
		void announce( void );

	private:
		std::string _name;
	
};

#endif /* ********************************************************** ZOMBIE_H */