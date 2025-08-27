#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <map>

class BitcoinExchange
{
    private:
        std::map<std::string, float>    _data;

        int _ft_stoi(const std::string &str);
        float   _ft_stof(const std::string &str);
        float   _getExchangeRate(const std::string &date);
        bool    _isDateValid(const std::string &date);
        bool    _isValueValid(const std::string &value);
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &b);
        BitcoinExchange &operator=(const BitcoinExchange &b);
        ~BitcoinExchange();

        class FileReadException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        void    initDataBase(std::string fileName);
        void    printExchange(std::string fileName);
};

#endif