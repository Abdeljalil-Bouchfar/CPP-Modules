#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>

class BitcoinExchange
{

	public:

		BitcoinExchange();
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();

		float get_value(std::string &date, float &amount);
		BitcoinExchange &		operator=( BitcoinExchange const & rhs );

	private:
		std::map<std::string, float> _database;
};

#endif /* ************************************************* BITCOINEXCHANGE_H */