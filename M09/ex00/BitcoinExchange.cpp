#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange()
{
	std::ifstream data("data.csv");
	std::string line;
	std::getline(data, line);
	while (std::getline(data, line))
	{
		this->_database[line.substr(0, 10)] = strtod(line.substr(11, line.length()).c_str(), NULL);
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	this->_database = rhs._database;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float BitcoinExchange::get_value(std::string &date, float &amount)
{
	std::map<std::string, float>::iterator it = this->_database.upper_bound(date);
	if (it != this->_database.begin())
		it--;
	return (amount * it->second);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */