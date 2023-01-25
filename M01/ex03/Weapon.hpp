#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{

public:
	Weapon(std::string itype);
	~Weapon();
	const std::string &getType();
	void setType(std::string str);

private:
	std::string _type;
};

#endif /* ********************************************************** WEAPON_H */