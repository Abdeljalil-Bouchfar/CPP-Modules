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
		std::string _name;
		Weapon &_weapen;

};


#endif /* ********************************************************** HUMANA_H */