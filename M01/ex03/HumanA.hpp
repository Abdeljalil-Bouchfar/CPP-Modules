#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{

	public:
		HumanA(std::string i_name, Weapon &i_weapen);
		~HumanA();
		void attack();

	private:
		Weapon &_weapen;
		std::string _name;

};


#endif /* ********************************************************** HUMANA_H */