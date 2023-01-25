#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{

	public:

		HumanB(std::string i_name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapen);

	private:
		Weapon *_weapen;
		std::string _name;

};

#endif /* ********************************************************** HUMANB_H */