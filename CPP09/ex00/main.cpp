#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error, couldn't open file." << std::endl;
        return (1);
    }
    try
    {
        BitcoinExchange bitcoinexchange;

        bitcoinexchange.initDataBase("data.csv");
        bitcoinexchange.printExchange(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception Caught for BitcoinExchange !" << std::endl;
        std::cerr << e.what() << '\n';
    }
    return (0);
}