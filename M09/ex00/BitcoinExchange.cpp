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
		this->_database[line.substr(0, 10)] = std::stof(line.substr(11, line.length()));
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

void BitcoinExchange::get_value(std::string date, float amount)
{
	std::map<std::string, float>::iterator it = this->_database.upper_bound(date);
	it--;
	std::cout << date << " => " << amount << " = " << (it->second * amount) << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */