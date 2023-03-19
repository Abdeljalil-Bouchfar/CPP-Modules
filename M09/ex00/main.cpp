#include "BitcoinExchange.hpp"

void arg_err()
{
    std::cerr << "Error: could not open file." << std::endl;
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

int main(int ac, char **av)
{
    BitcoinExchange exch;
    // check argc count
    if (ac != 2)
        arg_err();
    // open input file
    std::ifstream input(av[1]);
    if (!input.is_open())
        arg_err();
    // read input data
    std::string line;
    std::getline(input, line);
    while (std::getline(input, line))
    {
        std::string date = line.substr(0, 10);
        if (line.length() > 12)
        {
            if (line.length() > 18)
                amount_error(1001);
            else
            {
                float amount = std::stof(line.substr(12, line.length()));
                if (amount >= 0 && amount <= 1000)
                    exch.get_value(date, amount);
                else
                    amount_error(amount);
            }
        }
        else
            bad_input(line);
    }
    return 0;
}