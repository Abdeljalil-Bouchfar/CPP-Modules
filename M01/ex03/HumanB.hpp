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
		std::string _name;
		Weapon *_weapen;

};

#endif /* ********************************************************** HUMANB_H */