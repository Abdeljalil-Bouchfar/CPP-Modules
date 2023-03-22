#include "BitcoinExchange.hpp"
#include <sstream>
#include <ctime>

const int MAX_VALID_YR = 9999;
const int MIN_VALID_YR = 1800;

void arg_err()
{
    std::cerr << "Error: wrong number of agements" << std::endl;
    exit(1);
}

void input_err()
{
    std::cerr << "Error: invalaid input file" << std::endl;
    exit(2);
}

void bad_input(std::string sufix)
{
    std::cerr << "Error: bad input => " << sufix << std::endl;
}

void amount_error(float amount)
{
    if (amount < 0)
        std::cerr << "Error: not a positive number." << std::endl;
    else
        std::cerr << "Error: too large a number." << std::endl;
}

bool is_all_digit(std::string &str)
{
    for (size_t i = 0; i < str.length(); i++)
        if (!isdigit(str[i]))
            return false;
    return true;
}

// Returns true if given year is valid or not.
bool is_valid_date(int d, int m, int y)
{
    // If year, month and day are not in given range
    if (y > MAX_VALID_YR || y < MIN_VALID_YR || m < 1 || m > 12 || d < 1 || d > 31)
        return false;

    // Handle February with leap year
    if (m == 2 && (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)))
        return (d <= 29);
    else if (m == 2)
        return (d <= 28);

    // Handle Months that must have number of days less than or equal to 30.
    if (m == 4 || m == 6 || m == 9 || m == 11)
        return (d <= 30);

    return true;
}

bool valid_line(float &amount, std::string &date, std::string &line)
{
    std::stringstream ss1(line);
    std::string tmp1, tmp2;
    int i = 0;
    while (!ss1.eof())
    {
        ss1 >> tmp1;
        if (i == 3 || (i == 1 && (tmp1.length() != 1 || tmp1[0] != '|')))
            return false;

        if (i == 0)
        {
            int d, m, y, j = 0;
            std::stringstream ss2(tmp1);
            while (std::getline(ss2, tmp2, '-'))
            {
                if (!is_all_digit(tmp2))
                    return false;
                if (j == 0)
                {
                    if (tmp2.length()!= 4)
                        return false;
                    y = strtol(tmp2.c_str(), NULL, 10);
                }
                else if (j == 1)
                {
                    if (tmp2.length()!= 2)
                        return false;
                    m = strtol(tmp2.c_str(), NULL, 10);
                }
                else if (j == 2)
                {
                    if (tmp2.length()!= 2)
                        return false;
                    d = strtol(tmp2.c_str(), NULL, 10);
                }
                j++;
            }
            if (j != 3 || !is_valid_date(d, m, y))
                 return false;
            date = tmp1;
        }
        else if (i == 2)
        {
            char *check;
            amount = strtod(tmp1.c_str(), &check);
            if (*check)
                return false;
        }
        i++;
    }
    return true;
}

int main(int ac, char **av)
{
    BitcoinExchange exch;
    // check argc count
    if (ac != 2)
        arg_err();
    // open input file
    std::ifstream input(av[1]);
    if (!input.is_open())
        input_err();
    // read input data
    std::string line;
    std::getline(input, line);
    while (std::getline(input, line))
    {
        std::string date;
        float amount;
        if (!valid_line(amount, date, line))
        {
            bad_input(line);
            continue;
        }
        if (amount >= 0 && amount <= 1000)
            std::cout << date << " => " << amount << " = " << exch.get_value(date, amount) << std::endl;
        else
            amount_error(amount);
    }
    return 0;
}