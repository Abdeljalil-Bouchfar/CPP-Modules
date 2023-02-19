#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

public:
	ClapTrap();
	ClapTrap(std::string i_name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap &operator=(ClapTrap const &rhs);

protected:
	std::string _name;
	int _hit_points;
	int _energy_points;
	int _attack_damage;
};

#endif /* ******************************************************** CLAPTRAP_H */