#include "BitcoinExchange.hpp"

int BitcoinExchange::_ft_stoi(const std::string &str)
{
	int i;

	std::istringstream(str) >> i;
	return (i);
}

float BitcoinExchange::_ft_stof(const std::string &str)
{
	float f;

	std::istringstream(str) >> f;
	return (f);
}

float BitcoinExchange::_getExchangeRate(const std::string &date)
{
	std::map<std::string, float>::iterator it = this->_data.lower_bound(date);
	if (date != it->first && it != this->_data.begin())
		it--;
	if (it == this->_data.end())
		it--;
	return (it->second);
}

bool BitcoinExchange::_isDateValid(const std::string &date)
{
	int maxDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int	year = _ft_stoi(date.substr(0, 4));
	int month = _ft_stoi(date.substr(5, 2));
	int day = _ft_stoi(date.substr(8, 2));
	bool isLeapYear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

	if (isLeapYear) // For February
		maxDays[1] = 29;
	if (year < 1000 || year > 9999)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (day < 1 || day > maxDays[month - 1])
		return (false);
	return (true);
}

bool BitcoinExchange::_isValueValid(const std::string &value)
{
	bool hasDot = false;
	if (value.empty() || !value.c_str())
		return (false);
	for (size_t i = 1; i < value.size(); i++)
	{
		if (value.at(i) == '.')
		{
			if (hasDot)
				return (false);
			hasDot = true;
		}
		else if (!std::isdigit(value.at(i)))
			return (false);
	}
	return (true);
}

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &b)
{
	*this = b;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &b)
{
	this->_data = b._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

const char* BitcoinExchange::FileReadException::what() const throw()
{
	return ("An error occured while reading the file.");
}

void	BitcoinExchange::initDataBase(std::string fileName)
{
	std::ifstream infile(fileName.c_str());
	std::string	line;

	if (infile.fail() || !infile.is_open())
		throw BitcoinExchange::FileReadException();
	while(std::getline(infile, line))
	{
		if (!line.compare("date,exchange_rate"))
			continue;
		size_t	delimiter = line.find(",");
		std::string	date = line.substr(0, delimiter);
		std::string rate = line.substr(delimiter + 1);

		this->_data.insert(std::pair<std::string, float>(date, _ft_stof(rate)));
	}
	infile.close();
}

void	BitcoinExchange::printExchange(std::string fileName)
{
	std::ifstream infile(fileName.c_str());
	std::string line;
	
	if (infile.fail() || !infile.is_open())
		throw BitcoinExchange::FileReadException();
	while (std::getline(infile, line))
	{
		if (!line.compare("date | value"))
			continue;
		bool datePresent = line.length() > 13 && line.at(4) == '-' && line.at(7) == '-' \
																			&& line.at(10) == ' ';
		if (!datePresent)
		{
			std::cout << "Error: Bad input => " << line << std::endl;
			continue;
		}
		size_t delimiter = line.find("|");
		if (delimiter == line.npos)
		{
			std::cout << "Error: Bad input => " << line << std::endl;
			continue;
		}
		std::string date = line.substr(0, delimiter - 1);
		std::string valueString = line.substr(delimiter + 1);
		float value = _ft_stof(valueString);
		if (!_isDateValid(date))
		{
			std::cout << "Error: date is wrong => " << line << std::endl;
			continue;
		}
		if (value < 0)
		{
			std::cout << "Error: Not a positive number => " << line << std::endl;
			continue;
		}
		if (value > 1000)
		{
			std::cout << "Error: Too large number => " << line << std::endl;
			continue;
		}
		if (!_isValueValid(valueString))
		{
			std::cout << "Error: Bad input => " << line << std::endl;
			continue;
		}
		float rate = _getExchangeRate(date);
		std::cout << date << " => " << value << " = " << (rate * value) << std::endl;
	}
}